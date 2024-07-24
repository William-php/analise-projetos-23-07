#include <stdio.h>
#include <math.h>
float delta(float a, float b, float c) {
	float d;
	if (!a || !c) return pow( (b * b), 0.5 );
	d = (b * b) - (4 * a * c);
	if (d > 0) return pow(d, 0.5);
	exit(1);
	
}

void secondFunc(float d, float a, float b, float c) {
	if (d > 0) {
		printf("A: %.2f | B: %.2f | C: %.2f | Delta: %.2f\n", a, b, c, d);
		printf("Result 1: %.2f\n", (-b + d) / (2 * a));
		printf("Result 2: %.2f\n", (-b - d) / (2 * a));
	} else {
		printf("A: %.2f | B: %.2f | C: %.2f | Delta: %.2f\n", a, b, c, d);
		printf("Result 1: %.2f\n", (-b) / (2 * a));
	}	
};


int main() {
	float a, b, c, d;
	
	printf("Write A value: ");
	scanf("%f", &a);
	
	printf("Write B value: ");
	scanf("%f", &b);
	
	printf("Write C value: ");
	scanf("%f", &c);
	
	d = delta(a, b, c);
	if (d) 
	secondFunc(d, a, b, c);
	return 0;
}
