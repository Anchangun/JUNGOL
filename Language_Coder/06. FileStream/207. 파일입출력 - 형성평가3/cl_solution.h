#pragma once
#include<iostream>
typedef struct UserData
{
	int first_data;
	int second_data;
	std::string calculations;
}UserData;

class cl_solution
{
private :
	UserData st_user_data;
	void input_data();
};

