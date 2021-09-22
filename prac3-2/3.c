#include<stdio.h>
#include<stdlib.h>

void lotto(void);

int main() {
	lotto();
	lotto();
	lotto();
	lotto();
	lotto();
	lotto();
	lotto();
	lotto();
	lotto();
	lotto();

	return 0;
}

void lotto(void) {
	static int seed = 1;
	int num1, num2, num3, num4, num5, num6;
	srand(seed);
	num1 = rand() % 45 + 1;
	num2 = rand() % 45 + 1;
	num3 = rand() % 45 + 1;
	num4 = rand() % 45 + 1;
	num5 = rand() % 45 + 1;
	num6 = rand() % 45 + 1;
	printf("%d : %d %d %d %d %d %d\n", seed, num1, num2, num3, num4, num5, num6);
	seed++;
}


