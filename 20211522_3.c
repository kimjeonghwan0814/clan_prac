#include<stdio.h>
#include<stdlib.h>
int* get_next_process(int* prev_pointer, int size);
int main() {
	int N;
	int* arr;
	scanf("%d", &N);
	arr = (int*)malloc(N * sizeof(int));
	if (arr == NULL) {
		printf("not allocated\n");
		return 1;
	}
	for (int i = 0; i < N; i++) {
		scanf("%d", arr + i);
	}
	while (N != 1) {
		arr = get_next_process(arr, N);
		if (N % 2 == 0) {
			N = N / 2;
		}
		else {
			N = (N - 1) / 2 + 1;
		}
		for (int i = 0; i < N; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}

	free(arr);
	return 0;
}
int* get_next_process(int* prev_pointer, int size) {
	int next_size;
	int* next_pointer;
	int j = 0;

	if (size % 2 == 0) {
		next_size = size / 2;
	}
	else {
		next_size = (size - 1) / 2 + 1;
	}
	next_pointer = (int*)malloc(next_size * sizeof(int));
	if (prev_pointer[0] <= prev_pointer[1]) {
		for (int i = size-1; i >= 0; i -= 2) {
			if (i != 0) {
				next_pointer[j] = prev_pointer[i] + prev_pointer[i - 1];
			}
			else {
				next_pointer[j] = prev_pointer[0];
			}
			j++;
		}
	}
	else {
		for (int i = 0; i<size; i += 2) {
			if (i != size-1) {
				next_pointer[j] = prev_pointer[i] + prev_pointer[i + 1];
			}
			else {
				next_pointer[j] = prev_pointer[size-1];
			}
			j++;
		}
	}
	return next_pointer;
}