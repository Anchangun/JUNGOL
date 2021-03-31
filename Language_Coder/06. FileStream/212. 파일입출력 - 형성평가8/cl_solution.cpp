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
			loop_insert = 0;
		}
	}
}

std::string cl_solution::fn_result_data(){
	int lp_w = 0;
	int lp_num_w = 0;
	int lp_string_w = 0;
	float temp_sum=0;
	std::vector<float> vt_temp_sum;
	std::string result_msg;
	while (lp_w < vt_user_data.size()) {
		while (lp_num_w < MAX) {
			temp_sum= temp_sum+vt_user_data[lp_w].num[lp_num_w];
			lp_num_w++;
		}
		temp_sum = std::ceil((temp_sum/ MAX) * 10) / 10;
		vt_temp_sum.push_back(temp_sum);
		lp_w++;
		lp_num_w = 0;
		temp_sum = 0;
	}
	std::sort(vt_temp_sum.rbegin(), vt_temp_sum.rend());
	for (int lp_f = 0; lp_f < vt_temp_sum.size(); lp_f++) {
		result_msg = result_msg + std::to_string(vt_temp_sum[lp_f]) + "\n";
	}
	
	return result_msg;
}

bool cl_solution::fn_data_check(int data){
	return (data < 2 || data>100) ? false :  true;
}

cl_solution::cl_solution(){
	m_file_write = new cl_file_write("Result.txt");
}

cl_solution::~cl_solution()
{
	delete(m_file_write);
}

void cl_solution::fn_run(){
	fn_input_data();

	m_file_write->setterWriteFile(fn_result_data());
}


