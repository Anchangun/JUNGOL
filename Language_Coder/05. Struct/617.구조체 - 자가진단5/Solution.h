#pragma once

#include<iostream>
#include<vector>
typedef struct USER_DATA {
	std::string name;
	float tall;
}USER_DATA;
class Solution
{

private :
	int user_data_cnt;
	std::vector<USER_DATA> vector_data;
	USER_DATA* min_data;
	void fn_user_input();
	void fn_user_input_data();
	void fn_min_check();
	void fn_output_data();

public :
	Solution();
	void run();
};

