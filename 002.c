#include <stdio.h>;

int main(void) {
	int sum = 0;
	for (int a = 1, b = 1, c = 2; c < 4000000;
			a = b + c, b = a + c, c = a + b) {
		sum += c;
	}
	printf("%i\n", sum); // 4613732
	return 0;
}
