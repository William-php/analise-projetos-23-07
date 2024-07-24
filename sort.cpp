#include <stdio.h>
#include <stdlib.h>

void inputArray(int *array) {
	for (int i = 0; i < 200000; i++) array[i] = rand();
	
	
}

void sort(int *array) {
	
	for (int i = 0; i < 200000; i++) {
		
		for (int j = i; j < 200000; j++) {
			if (array[j] < array[i]) {
				int aux = array[i];
				array[i] = array[j];
				array[j] = aux;
			}
		}
		  
	}	
}

int main() {
	int array[200000];
	inputArray(array);
	printf("test 1: \n");
	for (int i = 0; i < 200000; i++) printf("%d\n\n", array[i]);
	
	printf("test 2: \n");
	sort(array);
	for (int i = 0; i < 200000; i++) printf("%d\n\n", array[i]);
	return 0;	
}
