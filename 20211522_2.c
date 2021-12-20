#include<stdio.h>
void find(int* arr, int n);
int main() {
	int N;
	int arr[100];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", arr + i);
	}
	find(arr, N);
	return 0;
}
void find(int* arr, int n) {
	printf("<result>\n");
	int num[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (int i = 0; i < n; i++) {
		num[arr[i]]++;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", num[i]);
	}

}