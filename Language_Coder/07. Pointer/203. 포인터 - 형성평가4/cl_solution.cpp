#include "cl_solution.h"

void cl_solution::fn_calculation(int* arr, int size)
{
	for (int lp = 0; lp < size; lp++) {
		if (arr[lp] % 2 == 1) {
			odd++;
		}
		else
			even++;
	}
}

void cl_solution::fn_show()
{
	std::cout << "odd : " << odd << std::endl;
	std::cout << "even : " << even << std::endl;
}

cl_solution::cl_solution()
{
	odd=0;
	even = 0;
}

int* cl_solution::fn_input_data(int* arr, int size){
	for (int lp = 0; lp < size; lp++) {
		std::cin >> arr[lp];
	}
	return arr;
}

void cl_solution::fn_run(int* arr,int size)
{
	fn_calculation(arr, size);
	fn_show();
}
