#include "Solutaion.h"
int main() {
	int arr[100];
	Solutaion* sol;
	memset(arr, 0, sizeof(arr));
	sol = new Solutaion();
	sol->Run(arr,sizeof(arr)/sizeof(int));

	return 0;
}