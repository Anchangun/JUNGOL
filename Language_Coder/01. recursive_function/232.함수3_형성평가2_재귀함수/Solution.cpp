#include "Solution.h"

void Solution::input_data(){
	std::cin >> user_data;
	if (user_data < 0) {
		std::cout << "data error" << std::endl;
	}
}

void Solution::recursion(int data){
	if (data > 0) {
		std::cout << data << " ";
		data = data - 2;
		recursion(data);
	}
}

Solution::Solution(){
	user_data = 0;
}

