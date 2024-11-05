#include <iostream>
#include <vector>

template <typename T>
T power_sqtr(T in_num)
{
	return in_num * in_num;
}
template<class T>
std::vector<T> power_sqtr(const std::vector<T>& in_vec)
{
	std::vector <T> inturnal_Vector(in_vec.size());

	for (int i = 0; i < in_vec.size(); i++)
	{
		inturnal_Vector[i] = in_vec[i] * in_vec[i];
	}

	return inturnal_Vector;
}

int main()
{
	int temp_num;
	std::cout << "in: ";
	std::cin >> temp_num;
	temp_num = power_sqtr(temp_num);
	std::cout << "out: " << temp_num << std::endl;

	std::vector <int> temp_vec{ -1,2,9 };
	std::cout << "in: ";
	for (int n : temp_vec)
	{
		std::cout << n << " ";
	}

	std::vector <int> powered_vector = power_sqtr(temp_vec);

	std::cout << "\nout: " << powered_vector[0] << " " << powered_vector[1] << " " << powered_vector[2];

	return 51;
}