#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//#include<windows.h>
//int main(){
//	char arr[1000];
//	int i;
//	for (i = 0; i < 1001; i++){
//		arr[i] = -1 - i;
//	}
//	printf("arr����1=%d\n", strlen(arr));
//	printf("\narr����2=%d\n\n", sizeof(arr));
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//int main(){
//	char arr[100] = "abcdefjhigklmnopqrstuvwxyz";
//	printf("arr����1=%d\n", strlen(arr));
//	printf("\narr����2=%d\n\n", sizeof(arr));
//	system("pause");
//	return 0;
//}
//

//#include<stdio.h>
//#include<windows.h>
//int main(){
//	char arr[] = "abcdefjhigklmnopqrstuvwxyz";
//	printf("arr����1=%d\n", strlen(arr));
//	printf("\narr����2=%d\n\n", sizeof(arr));
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//int main(){
//	char arr[100] = "abcdefjhigklmnopqrstuvwxyz";
//	printf("arr����1=%d\n", strlen(arr));
//	printf("\narr����2=%d\n\n", sizeof(arr));
//	system("pause");
//	return 0;
//}



////��������
//#include<stdio.h>
//#include<Windows.h>
//
//int main(){
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
////�ٶ�����num1=10,num2=20
//	printf("1:num1=%d,num2=%d\n", num1, num2);
////��num1=10ʱ���������:0000 0000 0000 0000 0000 0000 0000 1010
////��num1=20ʱ���������:0000 0000 0000 0000 0000 0000 0001 0100
//	num1 = num1^num2;
////num1->0000 0000 0000 0000 0000 0000 0001 1110-->30
//	num2 = num1^num2;
////num2->0000 0000 0000 0000 0000 0000 0000 1010->10
//	num1 = num1^num2;
////num1->0000 0000 0000 0000 0000 0000 0001 0100->20
//	printf("2:num1=%d,num2=%d\n", num1, num2);
//	system("pause");
//	return 0;
//}


//��������
//ȱ�㣺���������ر���ʱ�򣬵�����֮�ͷ��������
//��ᵼ�¼�����ִ���
//#include<stdio.h>
//#include<Windows.h>
//
//int main(){
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	printf("1:num1=%d,num2=%d\n", num1, num2);
//	num1 = num1 + num2;
//	num2 = num1 - num2;
//	num1 = num1 - num2;
//	printf("2:num1=%d,num2=%d\n", num1, num2);
//	system("pause");
//	return 0;
//}




 /*����һ��
#include<stdio.h>
#include<Windows.h>

int main(){
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d",&num1,&num2);
	printf("1:num1=%d,num2=%d\n",num1,num2);
	int tmp = 0;
	tmp = num1;
	num1 = num2;
	num2 = tmp;
	printf("2:num1=%d,num2=%d\n", num1, num2);
	system("pause");
	return 0;
}*/