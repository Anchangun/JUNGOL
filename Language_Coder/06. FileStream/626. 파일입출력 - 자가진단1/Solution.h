#pragma once
#include"share.h"
#include "cl_write_file.h"
class Solution
{
private : 
	int first_data;
	int second_data;
	void fn_input_data();
	int fn_data_calculation();
	void fn_data_save();
public :
	void fn_run();
};

