#include <stdio.h>
#include <math.h>
#include <stdint.h>

uint64_t factorOutI(uint64_t n, uint64_t i);

int main(void) {
	uint64_t n = 600851475143;
	uint64_t lastFactor = (!(n % 2)) ? 2 : 1;
	if (lastFactor == 2) {
		n = factorOutI(n, 2);
	}
	uint64_t maxFactor = sqrt(n);
	for (uint64_t i = 3; n > 1 && i <= maxFactor; i += 2) {
		if (!(n % i)) {
			n = factorOutI(n, i);
			lastFactor = i;
			maxFactor = sqrt(n);
		}
	}
	printf("%llu\n", n == 1 ? lastFactor : n); // 6857
	return 0;
}

uint64_t factorOutI(uint64_t n, uint64_t i) {
	while (!(n % i)) {
		n /= i;
	}
	return n;
}

