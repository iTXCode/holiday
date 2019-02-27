#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<windows.h>
//
//
//int Count_Length(char *point){
//	if (*point != '\0'){
//		point++;
//		return 1+Count_Length(point);
//	}
//	else{
//		return 0;
//	}
//}
//
//int main(){
//	char arr[] = "abcedfghijklmnopqrstuvwxyz";
//	int num=Count_Length(arr);
//	printf("arr数组的长度=%d\n",num);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//
//
//int Count_Length(char *point){
//	if (*point != '\0'){
//		return 1 + Count_Length(++point);
//	}
//	else{
//		return 0;
//	}
//}
//
//int main(){
//	char arr[] = "abcedfghijklmnopqrstuvwxyz";
//	int num = Count_Length(arr);
//	printf("arr数组的长度=%d\n", num);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int one = 1, two = 1, sum = 1;
//	while (n > 2){
//		n -= 1;
//		two = sum;
//		sum = one;
//		sum = one + two;
//	}
//	printf("sum=%d\n",sum);
//	system("pause");
//	return 0;
//}


//用选择法进行排序
void Sort(int array[], int size){
	int i = 0;
	int  max = array[0];
	for (; i < size-1; i++){
		for (int j = 1; j < size - i-1; j++){
			if (array[i] < array[j]){
				max = array[j];
			}
		}
	}
}