#include <stdio.h>

int sumMultiplesOf3And5(int max);
int sumMultipleOfMax(int multiple, int max);

int main(void) {
	printf("%i\n", sumMultiplesOf3And5(10)); // 23
	printf("%i\n", sumMultiplesOf3And5(1000)); // 233168
	return 0;
}

int sumMultiplesOf3And5(int max) {
	return sumMultipleOfMax(3, max) + sumMultipleOfMax(5, max)
			- sumMultipleOfMax(15, max);
}

int sumMultipleOfMax(int multiple, int max) {
	int multipleQuotient = (max - 1) / multiple;
	return multiple * (multipleQuotient * (multipleQuotient + 1)) / 2;
}

