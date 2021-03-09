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
	std::cout << "User�� �̸��� Ű�� �Է����ּ���. 5�� ����" << std::endl;
	std::cout << "���� �Է� �� : " << user_data_cnt << std::endl;
	std::cout << "�̸��� �Է����ּ���. �̸��� 20�� �����Դϴ�." << std::endl;

	std::cin >> temp_user_data.name;
	if (temp_user_data.name.size() > 20) {
		exit(1);
	}
	std::cout << "Ű�� �Է����ּ���" << std::endl;
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
	std::cout << "���� Ű�� ���� ����� : " << min_data->name << " " << std::endl;
	std::cout << "Ű�� : " << min_data->tall << std::endl;
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

