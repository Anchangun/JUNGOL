#pragma once
#include"share.h"
#include"cl_write_file.h"
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
	void fn_input_data();
	void fn_save_data();


public :
	void fn_run();
};

