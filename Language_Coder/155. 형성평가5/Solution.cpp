#include "Solution.h"

void Solution::run(char* arr,int arr_size)
{
	while (1) {
		std::cout << "data input : char" << std::endl;
		std::cin >> check_data;
		switch (check_data)
		{
		case 'J':
				fn_data_check_loop(arr, arr_size);
			break;
		case 'U':
				fn_data_check_loop(arr, arr_size);
			break;
		case 'N':
				fn_data_check_loop(arr, arr_size);	
			break;
		case 'G':
				fn_data_check_loop(arr, arr_size);
			break;
		case 'O':
				fn_data_check_loop(arr, arr_size);
			break;
		case 'L':
				fn_data_check_loop(arr, arr_size);
			break;
		default:
				printf("none\n");
				return;
		}

	}
}

void Solution::fn_data_check_loop(char* arr, int arr_size)
{
	for (int lp = 0; lp < arr_size; lp++) {
		if (arr[lp] == check_data) {
			printf("%d \n", lp+1);
			break;
		}
	}
}
