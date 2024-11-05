#include <iostream>

template <class T>
class RowProxy {
public:
	RowProxy(T* row_ptr) : row_ptr_(row_ptr) 
	{ 
		row_ptr_ = new T[row_ptr];
	}
	T& operator[](size_t index) {
		//TODO: выбрасывать исключение дл€ некорректной позиции
		return row_ptr_[index];
	}
private:
	T* row_ptr_=NULL;
};




template <class T>
class Table
{
private:
	size_t RowsMain, ColsMain;
	T ** Arr;
public:

	Table()
	{
		RowsMain = 0;
		ColsMain = 0;
		Arr = NULL;
	}

	Table(size_t rows, size_t cols) : RowsMain(rows), ColsMain(cols)
	{ 
		Arr = new T* [RowsMain];
		for (int i = 0; i < RowsMain; i++)
		{
			Arr[i] = new T [ColsMain];
		}
		std::cout << "done" << std::endl;
	}
	~Table() 
	{
		delete[] Arr;
		std::cout << "undone" << std::endl;
	}
	/*
	T* operator[](int FindCol)
	{
		return Arr[FindCol];
	}
	*/
	//¬озвращаем прокси дл€ строки
	
	RowProxy<T> operator[](size_t row)
	{
		//TODO: выбрасывать исключение дл€ некорректной позиции
		return RowProxy<T>(Arr[row]);
	}
	
	//Table(const Table&) = delete;//запрещаем конструктор копировани€
	//Table& operator= (const Table&) = delete; //запрещаем оператор присваивани€
};





int main()
{
	auto test = Table<int>(3, 3);
	//test[0][0]= 5;
	//std::cout << test[0][0];

	return 52;
}