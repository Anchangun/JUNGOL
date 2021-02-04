#include "Solution.h"

void Solution::run(int size)
{
	int enter = size;
	int check= enter;
	int lp_size = size * size;
	for (int lp = 1; lp < lp_size+1; lp++) {
		if (enter == lp) {
			std::cout << lp << std::endl;
			enter = enter + check;
		}
		else
		std::cout << lp << " ";
	}
}
