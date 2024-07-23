#include <stdio.h>
#include <stdlib.h>

int lengthArray(int number) {
	int length = 0; //+1
	int n = 2; //+1
	while (number > 1) { //n * 
		if (number % n == 0) { //n+2
			length += 1; // +1
			number = number / n; //+1
			continue;
		}		
		n += 1; //n+1
	}
	return length; //+1
}
void factoration(int *array, int number) {
	int n = 2; //+1
	int index = 0; //+1
	
	while (number > 1) { //n 
		if (number % n == 0) { //n + 3
			array[index] = n; //+1
			index += 1; //+1
			number = number / n; //+1
			continue; //+1
		}
		
		n += 1; //n+1
	}
}

void factors(int *array, int length) {	
	for (int i = 0; i < length; i++) {//n*
		printf("factor: %d\n", array[i]); //(n+1)
	}
}

int factorial(int number) {
	if (number == 1) return 1; //+1
	int factor = number * factorial(number - 1); //n + 1
	return factor; //+1
}

int  main() {
	int number; //+1
	printf("Enter for a 'number': "); //+1
	scanf("%d", &number); //+1
	int length = lengthArray(number); //+1
	int *array = (int*)malloc(sizeof(int) * length); //+1
	factoration(array, number); //+1
	factors(array, length); //+1	
	return 0;
}
