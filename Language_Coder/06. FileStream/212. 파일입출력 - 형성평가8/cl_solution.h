#pragma once
#include"share.h"
#include"cl_file_write.h"
#include <math.h>
#include <vector>
#include<algorithm>
#define MAX 3
typedef struct UserData {
	int num[MAX];
}UserData;

class cl_solution
{
private :
	cl_file_write* m_file_write;
	std::vector<UserData> vt_user_data;
	void fn_input_data();
	std::string fn_result_data();
	bool fn_data_check(int data);

public :
	cl_solution();
	~cl_solution();
	void fn_run();
};

