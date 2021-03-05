#include "Solution.h"

void Solution::fn_user_input(){
	for (int lp = 0; lp < 5; lp++) {
			user_data_cnt = lp;
			fn_user_input_data();
	}
}

void Solution::fn_user_input_data()
{
	USER_DATA temp_user_data;
	std::cout << "User의 이름과 키를 입력해주세요. 5명 제한" << std::endl;
	std::cout << "현재 입력 수 : " << user_data_cnt << std::endl;
	std::cout << "이름을 입력해주세요. 이름은 20자 이하입니다." << std::endl;

	std::cin >> temp_user_data.name;
	if (temp_user_data.name.size() > 20) {
		exit(1);
	}
	std::cout << "키를 입력해주세요" << std::endl;
	std::cin >> temp_user_data.tall;
	vector_data.push_back(temp_user_data);
}

void Solution::fn_min_check(){
	for (int lp = 0; lp < vector_data.size(); lp++) {
		if (min_data->tall == 0) {
			min_data =&vector_data[lp];
		}
		else {
			if (min_data->tall > vector_data[lp].tall) {
				min_data = &vector_data[lp];
			}
		}
	}
}

void Solution::fn_output_data(){
	std::cout << "가장 키가 작은 사람은 : " << min_data->name << " " << std::endl;
	std::cout << "키는 : " << min_data->tall << std::endl;
}

Solution::Solution(){

	user_data_cnt = 0;
	min_data = new USER_DATA();
}

void Solution::run(){
	fn_user_input();
	fn_min_check();
	fn_output_data();
}

