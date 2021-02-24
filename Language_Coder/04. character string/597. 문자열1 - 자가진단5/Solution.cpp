#include "Solution.h"

void Solution::input_data()
{
	std::cout << "First Data : ";
	std::cin >> user_data_one;
	std::cout<<std::endl;
	std::cout << "Second Data : ";
	std::cin >> user_data_two;
	std::cout << std::endl;

	if (user_data_one.size() > 20 && user_data_two.size() > 20) {
		std::cout << "Data Error" << std::endl;
		return;
	}

}

void Solution::run()
{
	input_data();
	std::string sum_data = user_data_one + user_data_two;
	std::cout << "Data : "<<sum_data.size()<<std::endl;
}

