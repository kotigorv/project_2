#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;
#include <math.h>;


int main() {

	float a, b, x;

	printf("Enter a, b, x:");
	int ret = scanf("%f, %f, %f", &a, &b, &x);

	if (ret < 3) {
		printf("Error input \n ");
		return -1;
	}

	float exponent = a * x;
	float term1 = 2 / (1 - x);
	float term2 = b * sin(3 * x);

	float y = exp(exponent) * (term1 + term2);
	printf("Result: %.3f\n", y);
	return 0;

};