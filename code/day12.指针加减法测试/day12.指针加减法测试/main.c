#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<windows.h>
//
//int main(){
//	char array[] = "abcdefghijklmnopqrstuvwxyz";
//	int size = sizeof(array) / sizeof(array[0]);
//	char *p = &array;
//	char *q = &array[size-1];
//	int sum = q - p;
//	int sum2 = *(q -1)- *p;
//	//指针直接减一操作就是将指针的地址减去相应类型的字节数
//	printf("size=%d\n", size);
//	printf("sum=%d\n", sum);
//	printf("sum2=%d\n", sum2);
//	system("pause");
//	return 0;
//}


#include<stdio.h>
#include<windows.h>

void *find_char(char const *p, char const *q){
	char *ret = *p;
	char *dst = *q;
	while (*ret == '\0' || *dst == '\0'){
		if (*ret == *dst){
			return *ret;
		}
		else{
			for ()
		}
	}
}

int main(){
	char arr_1[] = "abcdefg";
	char arr_2[] = "ABCDEFg";
	char * return_find=find_char(arr_1,arr_2);
	printf("相同的字符为:%c\n", *return_find);
	system("pause");
	return 0;
}