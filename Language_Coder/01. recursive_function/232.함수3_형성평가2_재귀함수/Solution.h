#pragma once
#include<iostream>
class Solution
{
private:
	int user_data;
	void input_data();
	void recursion(int data);
public :
	Solution();
	void run() {
		input_data();
		recursion(user_data);
	}

};

