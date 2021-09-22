#include<stdio.h>

int a;
void multiple(int *num1);

int main() {
	int b;
	printf("global number: ");
	scanf("%d", &a);

	printf("input a integer : ");
	scanf("%d", &b);
	printf("multiplication(%d) = ", b);
	multiple(&b);
	printf("%d\n", b);

	return 0;
}

void multiple(int* num1) {
	*num1 = *num1 * a;
}
