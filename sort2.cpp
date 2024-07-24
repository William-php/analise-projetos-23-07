#include <stdio.h>
#include <stdlib.h>

struct Team {
	int pts;
	char name[30];
}typedef Team;

void sort(int *array, int length) {
	for (int i = 0; i < length; i++) {
		for (int j = i; j < length; j++) {
			if (array[i] > array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	
}

void insert(Team *teams, int length) {
	for (int i = 0; i < length; i++) {
		printf("Digit a name for team: ");
		fgets(teams[i].name, 30, stdin);
		getchar();
		printf("Digit a number for pts: ");
		scanf("%d", &teams[i].pts);
	}
}

void print(Team *teams, int length) {
	for (int i = 0; i < length; i++) {
		printf("Team: %s\n", teams[i].name);
	}
}

int main() {
	int length;
	printf("Digit a number for 'length: '");
	scanf("%d", &length);
	Team *teams = (Team*)malloc(sizeof(Team) * length);
	
	insert(teams, length);
	sort(teams, length);
	print(teams, length);
	return 0;
}
