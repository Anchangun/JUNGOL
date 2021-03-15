#define MAX 10
#include"cl_solution.h"
int main() {
	int arr[10];
	int* p_temp_arr;
	memset(arr, 0, sizeof(arr));
	cl_solution* sol = new cl_solution();

	p_temp_arr =sol->fn_input_data(arr, MAX);
	sol->fn_run(p_temp_arr, MAX);

	return 0;
}