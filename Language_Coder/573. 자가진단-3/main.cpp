#include"Solution.h"

int main() {
	Solution* sol=new Solution();
	int num=0;
	
	std::cin >> num;
	if (num >= 100) {
		std::cout << "Data Error" << std::endl;
	}
	else
	sol->run(num);
	return 0;
}