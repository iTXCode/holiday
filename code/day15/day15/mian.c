#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main(){
//	int a = 10;
//	int *p = &a;
//	int **q = &p;
//	printf("%p\n",&a);
//	printf("%p\n", &p);
//	printf("%p\n", &q);
//	printf("%p\n", *q);
//	printf("%d\n", a);
//	printf("%d\n", *p);
//	printf("%d\n", **q);
//	system("pause");
//	return 0;
//}

#include<stdio.h>
#include<assert.h>

void jun(char *dst, char *ret){
	assert(dst);
	assert(ret);
}

int main(){
	char arr1[] = "abcdefg";
	char arr2[] = "ABCdeFG";
	char *p = arr1;
	char *q = arr2;
	jun(p, q);
	system("pause");
	return 0;
}