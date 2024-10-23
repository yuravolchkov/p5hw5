#include <iostream>

class MyFunctor
{
protected:
	int TotalNumDiv3 = 0, CountNumDiv3=0;

public:

	void operator()(int InptNumber)
	{
		if (InptNumber % 3 == 0)
		{
			TotalNumDiv3 += InptNumber;
			CountNumDiv3++;
		}
	}

	void get_sum()
	{
		std::cout << "\n[OUT]: get_sum() = " << TotalNumDiv3 << std::endl;
	}

	void get_count()
	{
		std::cout << "[OUT]: get_count() = " << CountNumDiv3 << std::endl;
	}
};


void main()
{
	setlocale(LC_ALL, "Russian"); // задать русский текст
	std::system("chcp 1251"); // настроить кодировку консоли
	std::system("cls"); // очистить экран

	int array[] = { 4,1,3,6,25,54 };

	MyFunctor MF;

	std::cout << "[IN]: ";
	for (auto element : array)
	{
		std::cout << element << " ";
		MF(element);
	}
	
	MF.get_sum();
	MF.get_count();
}