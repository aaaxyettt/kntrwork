#include "task1.hpp"

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



int showEl(const int *ar, int size, int n, int m){
	static int index = 0;
	static int N = 0; //N - количество строк

	if(N >= m){

		return 0;
	}

	for(int M = 0;  M < m; M++){
		std::cout << ar[index] << "\t";
		index++;
	}

	N++;

	std::cout << "\n";

	showEl(ar, size, n, m);

	return 0;
}

void swap(int &a,int  &b){
	int temp = a;
	a = b;
	b = temp;
}


void selectionSort(int *ar, int size){
        for(int i = 0; i < size; i++){
                swap(ar[i], ar[search(ar, size, i)]);
        }
}


int search(int *ar, int size, int i){
        int min = ar[i];
        int index = 0;
        for(int j = i; j < size; j++){
                  if(ar[j] <= min){
                          min = ar[j];
                          index = j;
                  }
        }
        return index;
}
