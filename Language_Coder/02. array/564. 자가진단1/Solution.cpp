#include "Solution.h"

void Solution::run()
{
	char ch;
	int temp[26] = { 0, };

	while (1) {
		std::cin >> ch;
		if (ch >= 'A' && ch <= 'Z') {
			temp[ch - 65]++;
		}
		else {
			break;
		}
	}
	for (int lp = 0; lp < 26; lp++) {
		if (temp[lp] != 0) {
			std::cout << "char : " << (char)(lp + 65) << " check : " << temp[lp] << std::endl;
		}
	}

}
