#include "Solution.h"

void Solution::input_data(){
	std::cin >> user_data;
	if (user_data < 0) {
		std::cout << "data error" << std::endl;
	}
	if (user_data % 2 == 1) {
		check_data = 1;
	}
	else {
		check_data = 2;
	}
}

void Solution::recursion(int lp_data,int max_data){
	if (max_data > 0) {
		if(lp_data<=max_data){
			std::cout << lp_data << " ";
			lp_data = lp_data + 2;
			recursion(lp_data, max_data);
		}
	}
}

Solution::Solution(){
	user_data = 0;
	check_data = 0;
}

void Solution::run() {
	input_data();
	recursion(check_data,user_data);
}