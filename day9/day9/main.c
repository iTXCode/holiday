#define _CRT_SECURE_NO_WARNINGS 1



//ʮ������������һ����,�ú���ʵ�֡�
//#include<stdio.h>
//#include<windows.h>
//
//
//void Max(int *arr){
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < 10; i++){
//		if (arr[i]>max){
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//}
//int main(){
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		scanf("%d", &arr[i]);
//	}
//	Max(arr);
//	system("pause");
//	return 0;
//}








//ʮ�����������
//#include<stdio.h>
//#include<windows.h>
//
//int main(){
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		scanf("%d",&arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i < 10; i++){
//		if (arr[i]>max){
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n",max);
//	system("pause");
//	return 0;
//}



//ð������
//#include<stdio.h>
//#include<windows.h>
//
//int main(){
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++){
//		scanf("%d",&arr[i]);
//	}
//	for (i = 0; i <10 ; i++){
//		for (j = 0; j < 9 - i;j++)
//		if (arr[j]>arr[j + 1]){
//			int tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//		}
//	}
//	for (i = 0; i < 10; i++){
//		printf("arr[%d]=%d\n", i, arr[i]);
//	}
//	system("pause");
//	return 0;
//}