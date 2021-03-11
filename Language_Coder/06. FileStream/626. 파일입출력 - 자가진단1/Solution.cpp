#include "Solution.h"

void Solution::fn_input_data(){
	std::cout << "First Data : " << std::endl;
	std::cin >> first_data;
	std::cout << "Second Data : " << std::endl;
	std::cin >> second_data;
	if (first_data < 0 && second_data < 0) {
		std::cout << "ERROR DATA" << std::endl;
		exit(1);
	}

}

int Solution::fn_data_calculation(){
	int sum=0;
	if (first_data < second_data) {
		for (int lp = first_data; lp <= second_data; lp++) {
			sum = sum + lp;
		}
		return sum;
	}
	else if (first_data > second_data) {
		for (int lp = second_data; lp <= second_data; lp++) {
			sum = sum + lp;
		}
		return sum;
	}
	else {
		return first_data + second_data;
	}

}

void Solution::fn_data_save(){
	cl_write_file* m_write_file = new cl_write_file("Result.txt");
	m_write_file->setterWriteFile(std::to_string(fn_data_calculation()));

}


void Solution::fn_run()
{
	fn_input_data();
	fn_data_save();
}
