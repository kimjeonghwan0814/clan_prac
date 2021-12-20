#include<stdio.h>
void swap(int* a, int* b);
void sort(int* a, int m);
void all_sort(int a[][100], int n, int m);
int binary_search(int* a, int* endPrt, int key, int** findPtr);
int all_binary_search(int a[][100], int n, int m, int key, int** findPtr);
int main() {
	int arr[100][100];
	int** findPtr;
	int* Ptr;
	int res;
	int N, M, K;
	Ptr = &K;
	findPtr = &Ptr;
	scanf("%d %d %d", &N, &M, &K);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	all_sort(arr, N, M);
	res = all_binary_search(arr, N, M, K, findPtr);
	printf("%d\n", res);
	if (res == 1) {
		printf("%p\n", findPtr);
	}

}
void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = *a;
}
void sort(int* a, int m) {
	for (int i = 0; i < m - 1; i++) {
		for (int j = 0; j < m - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				swap(a + j, a + j + 1);
			}
		}
	}
}
void all_sort(int a[][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		sort(a[i], m);
	}
}
int binary_search(int* a, int* endPtr, int key, int** findPtr) {
	int m;
	int i = 0;
	int j = endPtr-a;
	while (i < j) {
		m = (i + j) / 2;
		if (key > a[m]) {
			i = m + 1;
		}
		else {
			j = m;
		}
	}
	if (key == a[i]) {
		*findPtr = &a[i];
		return 1;
	}
	else {
		return 0;
	}
}
int all_binary_search(int a[][100], int n, int m, int key, int** findPtr) {
	int num;
	for (int i = 0; i < n; i++) {
		num = binary_search(a[i], a[i] + m, key, findPtr);
		if (num == 1) {
			return 1;
		}
	}
	return 0;
}