#include<stdlib.h>
#include<stdio.h>

int bubblesort(int *ptr,int size);

int main() {
	int count;
	int *ans;
	scanf_s("%d",&count);
	ans = new int[count];
	for (int i = 0;i < count;i++) {
		int size, *ptr;
		scanf_s("%d",&size);
		ptr = new int[size];
		for (int j = 0;j < size;j++) {
			scanf_s("%d", (ptr + j));
		}
		int a = bubblesort(ptr, size);
		ans[i] = a;
	}

	for (int i = 0;i < count;i++) {
		printf("Optimal train swapping takes %d swaps.\n", ans[i]);
	}

	system("pause");
	return 0;
}

int bubblesort(int *ptr,int size) {
	int chtime = 0;
	for (int i = 0;i < size - 1;i++) {
		for (int j = 0;j < size - 1 - i;j++) {
			if (ptr[j] > ptr[j + 1]) {
				int ch = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = ch;
				chtime++;
			}
		}
	}
	return chtime;
}