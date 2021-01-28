#include"Solution.h"

int main() {
	char data[6] = { 'J','U','N','G','O','L' };
	Solution* sol = new Solution();

	sol->run(data, sizeof(data) / sizeof(char));

	return 0;
}