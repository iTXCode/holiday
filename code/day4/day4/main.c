#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<windows.h>
//int main(){
//	system("pause");
//	return 0;
//}



////NO.2
#include<stdio.h>
#include<windows.h>

void leapyear(year){
	if ((year % 4 == 0) && (year % 100 != 0 )|| (year % 400 == 0)){
		printf("%d��������\n", year);
	}
	else{
		printf("%d�겻������\n", year);
	}
}

int main(){
	int year;
	printf("������Ҫ�жϵ����:");
	scanf("%d", &year);
	leapyear(year);
	system("pause");
	return 0;
}


//NO.1
//#include<stdio.h>
//#include<windows.h>
//int main(){
//	int year;
//	printf("������Ҫ�жϵ����:");
//		scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
//		printf("%d��������\n",year);
//	}
//	else{
//		printf("%d�겻������\n", year);
//	}
//	system("pause");
//	return 0;
//}


//�˷��ھ���
//1*1=1 
//1*2=2   2*2=4
//1*3=3   2*3=6
//1*4=4   2*4=8


//#include<stdio.h>
//#include<windows.h>
//int main(){
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	printf("��������Ҫ���ĳ˷��ھ����ģ��С:");
//	scanf("%d",&i);
//	for (a= 1; a < i+1; a++){
//		for (j = 1; j <= a; j++){
//			printf("%-2d* %d=%-3d ", j, a, a*j);
//		}
//		printf("\n");
//	}
//	printf("\n");
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
//	char arr[100]="abcdefjhigklmnopqrstuvwxyz";
//	printf("arr����1=%d\n", strlen(arr));
//	printf("\narr����2=%d\n\n", sizeof(arr));
//	system("pause");
//	return 0;
//}





//#include<stdio.h>
//#include<windows.h>
//int main(){
//	char arr[1000];
//	int i;
//	for (i = 0; i < 1001; i++){
//		arr[i] = -1 - i;
//	}
//	printf("arr����1=%d\n",strlen(arr));
//	printf("\narr����2=%d\n\n",sizeof(arr));
//	system("pause");
//	return 0;
//}
//������������Կ�����strlen���ַ�������ʱ������\0��
//���������Ҳ�����\0�����㵽�ַ��������ڡ�
//��sizeof���������������ĳ��ȣ������ˡ�\0��