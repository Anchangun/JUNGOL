#include "Solution.h"

void Solution::run(int size)
{
	int enter = size;
	int lp_size = size * size;
	for (int lp = 1; lp < lp_size+1; lp++) {
		if (enter == lp) {
			std::cout << lp << std::endl;
			enter = enter + enter;
		}
		else
		std::cout << lp << " ";
	}
}
