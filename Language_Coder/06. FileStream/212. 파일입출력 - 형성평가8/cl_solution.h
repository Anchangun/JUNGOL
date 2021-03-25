#pragma once
#include"share.h"
#include <vector>
typedef struct UserData {
	int num[3];
}UserData;

class cl_solution
{
private :

	std::vector<UserData> vt_user_data;
	void fn_input_data();
	void fn_result_data();
	bool fn_data_check(int data);

public :

	void fn_run();
};

