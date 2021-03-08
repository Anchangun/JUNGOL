#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
typedef struct USER_DATA {
	std::string name;
	float tall;
	float weigth;
}USER_DATA;

class Solution
{
private :
	USER_DATA st_user_data;

	std::vector<USER_DATA> vector_user_data;
	void input_data();
	void sort_data();

	void fn_bubble_sort();

public :
	void run();
	
};

