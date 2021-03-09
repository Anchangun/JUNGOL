#include "Solution.h"

void Solution::fn_input_data()
{
	std::cout << "100 이하의 정수 입력 요청 : ";
	std::cin >> user_data;
	if (user_data <=100 && user_data>0) {
		p_user_data = &user_data;
	}
	else {
		std::cout << "ERROR DATA" << std::endl;
		exit(1);
	}
}

void Solution::fn_run(){
	fn_input_data();
	fn_data_show();
}

void Solution::fn_data_show(){
	for (int lp = 0; lp < *p_user_data; lp++) {
		printf("*");
	}
}
