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
		printf("%d年是闰年\n", year);
	}
	else{
		printf("%d年不是闰年\n", year);
	}
}

int main(){
	int year;
	printf("请输入要判断的年分:");
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
//	printf("请输入要判断的年分:");
//		scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
//		printf("%d年是闰年\n",year);
//	}
//	else{
//		printf("%d年不是闰年\n", year);
//	}
//	system("pause");
//	return 0;
//}


//乘法口诀表
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
//	printf("请输入需要求解的乘法口诀表规模大小:");
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
//	printf("arr长度1=%d\n", strlen(arr));
//	printf("\narr长度2=%d\n\n", sizeof(arr));
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<windows.h>
//int main(){
//	char arr[] = "abcdefjhigklmnopqrstuvwxyz";
//	printf("arr长度1=%d\n", strlen(arr));
//	printf("\narr长度2=%d\n\n", sizeof(arr));
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<windows.h>
//int main(){
//	char arr[100]="abcdefjhigklmnopqrstuvwxyz";
//	printf("arr长度1=%d\n", strlen(arr));
//	printf("\narr长度2=%d\n\n", sizeof(arr));
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
//	printf("arr长度1=%d\n",strlen(arr));
//	printf("\narr长度2=%d\n\n",sizeof(arr));
//	system("pause");
//	return 0;
//}
//由上述程序可以看出，strlen求字符串长度时遇到“\0”
//截至，并且不将“\0”计算到字符串长度内。
//而sizeof计算的是整个数组的长度，包括了“\0”