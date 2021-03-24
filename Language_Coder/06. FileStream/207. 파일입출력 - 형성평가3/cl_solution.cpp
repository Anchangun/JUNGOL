#include "cl_solution.h"

void cl_solution::fn_input_data(){
	std::cout << "plz insert first data : ";
	std::cin >> st_user_data.first_data;
	std::cout << "pla insert second data : ";
	std::cin >> st_user_data.second_data;
	std::cout << "pla insert calculations data : ";
	std::cin >> st_user_data.calculations;
	if (st_user_data.calculations.compare("+") == 0 || st_user_data.calculations.compare("-") == 0 || st_user_data.calculations.compare("*") == 0 || st_user_data.calculations.compare("/") == 0) {
		std::cout << "Data Insert Success" << std::endl;
	}
	else {
		std::cout << "Data Error" << std::endl;
		exit(1);
	}
}

void cl_solution::fn_save_data(){
	std::string temp_msg;
	cl_write_file* m_write_file=new cl_write_file("Result.txt");
	temp_msg = std::to_string(st_user_data.first_data) + " " + st_user_data.calculations + " " + std::to_string(st_user_data.second_data) + " = " + std::to_string(st_user_data.first_data + st_user_data.second_data);
	m_write_file->setterWriteFile(temp_msg);
}

void cl_solution::fn_run(){
	fn_input_data();
	fn_save_data();
}
