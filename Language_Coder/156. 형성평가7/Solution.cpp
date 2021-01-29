#include "Solution.h"

void Solution::run()
{
    std::vector<int> data;
    int user_data=0;
    int cnt=0;
    while (1) {
        std::cin>>user_data;
        if (999<user_data||-999>user_data) {
            std::cout << "Error Data"<<std::endl;
        }
        else if (user_data == 999) {
            int min = *std::min_element(data.begin(), data.end());
            int max = *std::max_element(data.begin(), data.end());
            std::cout << "min : " << min << std::endl;
            std::cout << "max : " << max << std::endl;
            break;
        }
        else {
            if (cnt < 100) {
                data.push_back(user_data);
            }
            else
                break;
        }

        cnt++;
    }

}
