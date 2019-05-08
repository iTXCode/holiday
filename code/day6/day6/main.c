#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<windows.h>
////柔性数组
////typedef struct st_type{
////	int i;
////	int arr[0];
////}type_a;
//
//typedef struct st_type{
//	int i;
//	int arr[];
//}type_a;
//两种类型都可以，在这个编译器环境中
//int  main(){
//	int m=sizeof(type_a);
//	printf("m=%d\n",m);
//	system("pause");
//	return 0;
//}

#include<stdio.h>
#include<windows.h>
enum Color{
	red,
	green,
	blue,
	a,
	b,
	c,
}color_type;
#define INT32 int
unsigned INT32 i = 10;
char *s = "abcdefgh  //hijklmn";
int  main(){
	int n= sizeof(color_type);
	printf("n=%d\n", n);
	system("pause");
	return 0;
}