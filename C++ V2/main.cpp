#include<stdlib.h>
#include<stdio.h>

int bubblesort(int *ptr,int size);  //�ŧi�w�j�ƧǪ��Ƶ{�� 

int main() {
	int count;                     //�ŧi�p�⦸��
	int *ans;                      //�ŧi�@�Ӱ����}�C�������ܼ� 
	scanf("%d",&count);            //��J�p�⦸��
	for (int i = 0;i < count;i++) {
		int size, *ptr;            //�ŧi�p�⦸�ƩM�ƦC�Ӽƪ������ܼ� 
		scanf("%d",&size);         //��J�ƦC�Ӽ�
		ptr = new int[size];
		for (int j = 0;j < size;j++) {scanf("%d", (ptr + j));} //��J�ƦC�Ӽƪ��� 
		int a = bubblesort(ptr, size); //�I�s�w�j�ƧǪ��Ƶ{���æ^�ǭ� 
	    ans[i] = a;                    //�N���G��J�}�C 
	}
	for (int i = 0;i < count;i++)
    {printf("Optimal train swapping takes %d swaps.\n", ans[i]);} //�N���G��X  
	system("pause"); return 0;
}

int bubblesort(int *ptr,int size) {
	int chtime = 0;     //�ŧi�洫���� 
	for (int i = 0;i < size - 1;i++) {
		for (int j = 0;j < size - 1 - i;j++) {  //��i�O�]���n�N���L������ 
			if (ptr[j] > ptr[j + 1]) {          //�p�G��L�j�N�洫 
				int ch = ptr[j]; ptr[j] = ptr[j + 1]; ptr[j + 1] = ch;
				chtime++;    // �p��洫���� 
			}}}	return chtime;//�^�ǥ洫���ƪ��� 
}
