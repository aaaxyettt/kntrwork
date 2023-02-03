#include "task0.hpp"

void randomFill(int *ar, int size, int min, int max){
	srand(time(nullptr));
        for (int i = 0; i < size; i++){
		int num = rand()%1000;
                if (num <= max && num >= min){
			ar[i] = num;
                }
                else{
			i = i - 1;
		}
        }
}


void show(int *ar, int size){

	for(int i = 0; i < size; i++){
		std::cout << i << "\t" << ar[i] << "\n";

	}

}







