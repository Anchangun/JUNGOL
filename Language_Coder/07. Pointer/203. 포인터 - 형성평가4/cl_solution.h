#pragma once
#include<iostream>
class cl_solution
{
private :
	int odd;
	int even;
	void fn_calculation(int* arr, int size);
	void fn_show(); 
public :
	cl_solution();
	int* fn_input_data(int* arr,int size);
	void fn_run(int* arr,int size);


};

