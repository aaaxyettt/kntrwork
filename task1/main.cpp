#include "task1.hpp"
#include <iostream>

int main(){

	int ar[100];
	
	randomFill(ar, 100, 100, 150);
	selectionSort(ar, 100);
	showEl(ar, 100, 10, 10);

	
	return 0;

}
