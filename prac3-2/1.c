#include<stdio.h>

void addition(int* num1, int num2);

int main() {
	int a, b;
	printf("Input a number: ");
	scanf("%d", &a);

	b = 5;
	printf("addition(%d, %d) = ", a, b);
	addition(&a, b);
	printf("%d\n", a);

	b = 7;
	printf("addition(%d, %d) = ", a, b);
	addition(&a,b);
	printf("%d\n", a);

	b = -3;
	printf("addition(%d, %d) = ", a, b);
	addition(&a, b);
	printf("%d\n", a);
	
	return 0;
}

void addition(int* num1, int num2) {
	*num1 = *num1 + num2;
}


