#include<stdlib.h>
#include<stdio.h>

int bubblesort(int *ptr,int size);  //宣告泡沫排序的副程式 

int main() {
	int count;                     //宣告計算次數
	int *ans;                      //宣告一個做為陣列的指標變數 
	scanf("%d",&count);            //輸入計算次數
	for (int i = 0;i < count;i++) {
		int size, *ptr;            //宣告計算次數和排列個數的指標變數 
		scanf("%d",&size);         //輸入排列個數
		ptr = new int[size];
		for (int j = 0;j < size;j++) {scanf("%d", (ptr + j));} //輸入排列個數的值 
		int a = bubblesort(ptr, size); //呼叫泡沫排序的副程式並回傳值 
	    ans[i] = a;                    //將結果輸入陣列 
	}
	for (int i = 0;i < count;i++)
    {printf("Optimal train swapping takes %d swaps.\n", ans[i]);} //將結果輸出  
	system("pause"); return 0;
}

int bubblesort(int *ptr,int size) {
	int chtime = 0;     //宣告交換次數 
	for (int i = 0;i < size - 1;i++) {
		for (int j = 0;j < size - 1 - i;j++) {  //檢i是因為要將換過的扣掉 
			if (ptr[j] > ptr[j + 1]) {          //如果比他大就交換 
				int ch = ptr[j]; ptr[j] = ptr[j + 1]; ptr[j + 1] = ch;
				chtime++;    // 計算交換次數 
			}}}	return chtime;//回傳交換次數的值 
}
