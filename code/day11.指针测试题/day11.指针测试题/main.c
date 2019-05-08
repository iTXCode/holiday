#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//#include<windows.h>
//
//int main(){
//	char arr[] = "abcdefghijklmn";
//	char *p = arr;
//	int count = 0;
//	while (*p != '\0'){
//		count++;
//		p++;
//	}
//	printf("count=%d\n",count);
//	system("pause");
//	return 0;
//}
//模拟实现strlen函数，其特点是以遇到的第一个'\0'
//为结束标志，将之前的字符数计入到字符串长度内



//#include<stdio.h>
//#include<windows.h>
//
//int main(){
//	int a = 100;
//	int *p =&a;
//	int **q = &p;
//	printf("a=%d\n",a);
//	printf("*p=%d\n", *p);
//	printf("**q=%d\n", **q);
//	system("pause");
//	return 0;
//}

//&a=p,*p=a=100;p为指针变量，其内部存储的是a的地址。
//&p=q,*q=&a=p,**q=a=100;