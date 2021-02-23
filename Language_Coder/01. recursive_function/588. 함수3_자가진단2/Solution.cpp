#include "Solution.h"

Solution::Solution()
{
	user_data = 0;
}

void Solution::input_data()
{
	std::cout << "50이하의 정수" << std::endl;
	std::cin >> user_data;
	if (user_data > 50 || user_data<0) {
		std::cout << "Error" << std::endl;
		std::exit(1);
	}
}

void Solution::Run()
{
	input_data();
	recursion(user_data);
}

void Solution::recursion(int data)
{
	if (data > 0) {
		std::cout << data<<" ";
		recursion(data-1);
	}
	else {
		return;
	}
}
