#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<windows.h>


//int count_value(int num){
//	int count = 0;
//	while (num != 0){
//		if (((num>>=1) & 1 ) != 0 ){
//			count += 1;
//		}
//	}
//	return count;
//}


//int count_value(int num){
//	int count = 0;
//	for (; num != 0; num >>= 1){
//		if (num % 2 != 0)
//			count += 1;
//	}
//	return count;
//}

//int count_value(int num){
//	int count = 0;
//	for (; num != 0; num >>= 1){
//		if ((num & 1) != 0)
//			count += 1;
//	}
//	return count;
//}


//int main(){
//	int a = 13;//0000 0000 0000 0000 0000 0000 0000 1101
//	int b = count_value(a);
//	printf("该数中比特位中有%d个1\n",b);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//
//int main(){
//	int a = 20;
//	if (1 <= a <= 10){
//		printf("In charge\n");
//	}
//	else{
//		printf("Out charge\n");
//	}
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//
//void swap(int p, int q){
//	int tmp=0;
//	tmp = p;
//	p = q;
//	q = tmp;
//	printf("a=%d  b=%d\n", a, b);
//}
//
//int main(){
//	int a = 10;
//	int  b = 20;
//	printf("a=%d  b=%d\n", a, b);
//	swap(a, b);
//	system("pause");
//	return 0;
//}
//



//#include<stdio.h>
//#include<windows.h>
//
//void Every_number(int num){
//	if (num > 9){
//		Every_number(num/10);
//		printf("%d ",num%10);
//	}
//	else{
//		printf("%d ",num);
//	}
//}
//
//
//int main(){
//	int num;
//	printf("请输入要求数值:");
//	scanf("%d",&num);
//	Every_number(num);
//	printf("\n");
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//
//void Every_number(int num){
//	int i=9;
//	int arr = 0;
//	while (num!=0){
//		arr = num % 10;
//		printf("%d ",arr);
//		num = num / 10;
//	}
//}
//
//int main(){
//	int num;
//	printf("请输入要求数值:");
//	scanf("%d", &num);
//	Every_number(num);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//逆置输出的函数


#include<stdio.h>
#include<windows.h>
#define N  100
void Every_number(int num){
	int i = N-1;
	int arr [N] = { 0 };
	while (num != 0){
		arr[i] = num % 10;
		num = num / 10;
		i--;
	}
	for (i+=1; i < N; i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	int num;
	printf("请输入要求数值:");
	scanf("%d", &num);
	Every_number(num);
	printf("\n");
	system("pause");
	return 0;
}