#include "task2.hpp"

void random(int *ar, int size){
        srand(time(nullptr));
        for (int i = 0; i < size; i++) {
                ar[i] = rand() % 100;
        }
}

void print(int *ar, int size){
        for(int i = 0; i < size; i++){

                std::cout << ar[i] << '\t';
        }
        std::cout << '\n';
}


int getMax(const int *ar, int size){
	static int left = 0;
	static int right = size - 1;

	if(right == left){
		std::cout << "max = " << ar[left] << std::endl;
		return 0;
	}

	if(ar[left] <= ar[right]){
		left++;
	}

	else if(ar[left] > ar[right]){
		right--;
	}

	getMax(ar, size);

	return 0;
}

	
int getMin(const int *ar, int size){
	static int left = 0;
	static int right = size -1;

	if(right == left){
		std::cout << "min = " << ar[left] << std::endl;
		return 0;
	}
	if(ar[left] <= ar[right]){
		right--;
	}

	else if(ar[left] > ar[right]){
		left++;
	}

	getMin(ar,size);

	return 0;
}

