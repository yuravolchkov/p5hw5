#include <iostream>
#include <vector>

template <typename TNT>
TNT power_sqtr(TNT in_num)
{
	return in_num * in_num;
}
template<class TN>
void power_sqtr(std::vector<TN>& in_vec)
{
	for (int i = 0; i < in_vec.size(); i++)
	{
		in_vec[i] = in_vec[i] * in_vec[i];
	}
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

	power_sqtr(temp_vec);

	std::cout << "\nout: " << temp_vec[0] << " " << temp_vec[1] << " " << temp_vec[2];

	return 51;
}