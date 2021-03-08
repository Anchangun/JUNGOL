#include "Solution.h"

void Solution::input_data(){
	while (1) {
		std::cout << "name : ";
		std::cin >> st_user_data.name;
		if (0==st_user_data.name.compare("End")) {
			break;
		}
		else {
			std::cout << "tall : ";
			std::cin >> st_user_data.tall;
			std::cout << "weigth : ";
			std::cin >> st_user_data.weigth;
			std::cout<<std::endl;
			vector_user_data.push_back(st_user_data);
		}
	}
}

void Solution::sort_data(){
	fn_bubble_sort();
}

void Solution::fn_bubble_sort(){
	USER_DATA temp_data;
	for(int lp_name_max_size= vector_user_data.size();lp_name_max_size!=0;lp_name_max_size--){
		for (int lp_name_vector = 0; lp_name_vector < lp_name_max_size-1; lp_name_vector++) {
			if (vector_user_data[lp_name_vector].name > vector_user_data[lp_name_vector + 1].name) {
				temp_data=vector_user_data[lp_name_vector];
				vector_user_data[lp_name_vector]=vector_user_data[lp_name_vector + 1];
				vector_user_data[lp_name_vector+1]=temp_data;
			}
		}
	}
	std::cout << "[Name Sort]" << std::endl;
	for (int lp_print = 0; lp_print < vector_user_data.size(); lp_print++) {
		std::cout << "Name : " << vector_user_data[lp_print].name << std::endl;
		std::cout << "tall : " << vector_user_data[lp_print].tall << std::endl;
		std::cout << "weight : " << vector_user_data[lp_print].weigth << std::endl;
	}


	for (int lp_weight_max_size = vector_user_data.size(); lp_weight_max_size != 0; lp_weight_max_size--) {
		for (int lp_weigth_vector = 0; lp_weigth_vector < lp_weight_max_size - 1; lp_weigth_vector++) {
			if (vector_user_data[lp_weigth_vector].weigth < vector_user_data[lp_weigth_vector + 1].weigth) {
				temp_data = vector_user_data[lp_weigth_vector];
				vector_user_data[lp_weigth_vector] = vector_user_data[lp_weigth_vector + 1];
				vector_user_data[lp_weigth_vector + 1] = temp_data;
			}
		}
	}
	std::cout << std::endl;
	std::cout << "[weight Sort]" << std::endl;
	for (int lp_print = 0; lp_print < vector_user_data.size(); lp_print++) {

		std::cout << "Name : " << vector_user_data[lp_print].name << std::endl;
		std::cout << "Tall : " << vector_user_data[lp_print].tall << std::endl;
		std::cout << "Weight : " << vector_user_data[lp_print].weigth << std::endl;
	}
	

}



void Solution::run()
{
	input_data();
	sort_data();
}
