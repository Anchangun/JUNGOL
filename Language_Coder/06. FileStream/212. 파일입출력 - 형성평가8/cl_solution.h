#pragma once
#include"share.h"
#include <math.h>
#include <vector>
#define MAX 3
typedef struct UserData {
	int num[MAX];
}UserData;

class cl_solution
{
private :

	std::vector<UserData> vt_user_data;
	void fn_input_data();
	std::string fn_result_data();
	bool fn_data_check(int data);

public :

	void fn_run();
};

