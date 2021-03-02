#pragma once

#include<iostream>
typedef struct company {
	std::string name;
	std::string company_name;
	int number;
}Comapny;
class Solution
{
private :
	Comapny* cp;
	void data_input();
	void data_output();
public :
	Solution() {
		cp = new Comapny();
	}
	void run();
};

