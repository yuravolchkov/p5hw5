#include <iostream>


template <class T>
class MyClass
{
private:
	int Rows = 1, Cols = 1;
public:
	class AddClass;
	AddClass* Arr;
	class AddClass
	{
	public:
		T* AddArr;
		AddClass() {}
		AddClass(int size) 
		{
			AddArr = new T[size];
			for (int i = 0; i < size; i++)
			{
				AddArr[i] = 0;
			}
		}
		T& operator[] (int AddRows)
		{
			return AddArr[AddRows];
		}

		const T& operator[] (int AddRows) const
		{
			return AddArr[AddRows];
		}
	};

	MyClass(int InputRows, int InputCols) : Rows(InputRows), Cols(InputCols)
	{
		Arr = new AddClass[Rows];
		for (int i = 0; i < Rows; i++)
		{
			Arr[i] = AddClass[Cols];
		}
		std::cout << "done" << std::endl;
	}

	~MyClass()
	{
		//for (int i = 0; i < Rows; i++)
		//{
	//		delete[] Arr[i];
		//}
		delete[] Arr;
		std::cout << "undone" << std::endl;
	}
/*	T& operator[](int FindCol)
	{	
		return Arr[FindCol];
	}

	const T& operator[](int FindCol) const
	{
		return Arr[FindCol];
	}
*/
	AddClass& operator[](int FindCol)
	{
		return Arr[FindCol];
	}
};


int main()
{
	auto test = MyClass<int>(3, 3);
	test[0][0] = 5;
	std::cout << test[0][0];

	return 52;
}