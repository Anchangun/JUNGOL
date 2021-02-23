#include "Solutaion.h"

void Solutaion::Run(int* arr, int arr_size)
{
	int check;

	for (int lp = 0; lp < arr_size;lp++) {
		std::cin >> get_data;
		if (get_data == -1) {
			if (lp < 3) {
				for (int lp_check = lp; lp_check >0;lp_check-- ) {
					std::cout << arr[lp_check-1] << " ";
				}
				break;
			}
			else {
				std::cout << arr[lp - 3] << " " << arr[lp - 2] << " " << arr[lp - 1];
				break;
			}
		}
		else {
			arr[lp] = get_data;
		}
	}
}
