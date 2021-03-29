#include "cl_solution.h"

void cl_solution::fn_input_data()
{
	int temp_data_size = 0;
	int loop_insert = 0;
	int loop_user = 0;
	UserData st_user_data;
	std::cout << "Please enter an integer within (2<=n<=100)." << std::endl;
	std::cin >> temp_data_size;

	if (!fn_data_check(temp_data_size)){
		std::cout << "Data Error" << std::endl;
		exit(1);
	}
	else {
		while (loop_user < temp_data_size) {
			while (loop_insert < 3) {
				std::cout << "insert data : ";
				std::cin >> st_user_data.num[loop_insert];
				std::cout << std::endl;
				loop_insert++;
			}
			vt_user_data.push_back(st_user_data);
			loop_user++;
		}
	}
}

std::string cl_solution::fn_result_data(){
	int lp_w = 0;
	int lp_num_w = 0;
	float temp_sum=0;
	std::string result_msg = NULL;
	while (lp_w < vt_user_data.size()) {
		while (lp_num_w < MAX) {
			temp_sum= temp_sum+vt_user_data[lp_w].num[lp_num_w];
			lp_num_w++;
		}
		result_msg = result_msg + std::to_string(temp_sum);
		lp_w++;
	}

}

bool cl_solution::fn_data_check(int data){
	return (data < 2 || data>100) ? false :  true;
}

void cl_solution::fn_run(){
	fn_input_data();
}


