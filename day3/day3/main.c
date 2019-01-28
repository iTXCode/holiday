#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//#include<windows.h>
//
//int main(){
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2){
//		for (j = 2; j <= i/2; j++){
//			if (i%j == 0)
//				break;
//		}
//		if (j>i/2){
//			count++;
//			printf("%d ", i);
//			if (count % 5 == 0){
//				printf("\n");
//			}
//		}
//
//	}
//	printf("\ncount = %d \n", count);
//	system("pause");
//	return 0;
//}
//


//#include<stdio.h>
//#include<math.h>
//#include<windows.h>
//
//int main(){
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2){
//		for (j = 2; j <= sqrt(i); j++){
//			if (i%j == 0)
//				break;
//		}
//		if (j>sqrt(i)){
//			count++;
//			printf("%d ", i);
//			if (count % 5 == 0){
//				printf("\n");
//			}
//		}
//
//	}
//	printf("\ncount = %d \n", count);
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<math.h>
//#include<windows.h>
//int main(){
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2){
//		for (j = 2; j <= i - 1; j++){
//			if (i%j == 0)
//				break;
//		}
//		if (j>i - 1){
//			count++;
//			printf("%d ", i);
//			if (count % 5 == 0){
//				printf("\n");
//			}
//		}
//
//	}
//	printf("\ncount = %d \n", count);
//	system("pause");
//	return 0;
//}





//#include<stdio.h>
//#include<math.h>
//#include<windows.h>
//int main(){
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++){
//		for ( j = 2; j <= i - 1; j++){
//			if (i%j == 0)
//				break;
//		}
//		if (j>i - 1){
//			printf("%d ",i);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//


//int main(){
//	int a[MAX] = { 0 };
//	for (int i = 0; i <100;i++){
//		printf("%d ", a[i]);
//		if ((i + 1) % 5 == 0){
//			printf("\n");
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
//

//int main(){
//	const int num = 10;
//	/*num = 20;*/
//	int a[num] = { 0 }; //const 修饰的变量是具有长属性的变量
//	 //次数num是变量所以不能用来定义数组的长度
//	system("pause");
//	return 0;
//}

//int main(){
//	const int num = 10;
//	/*num = 20;*/
//	printf("num=%d\n",num);
//	system("pause");
//	return 0;
//}



//int main(){
//	int i = 20; {
//		int i = 30;   //作用域
//	}
//	printf("i=%d\n",i); //输出i=20，原因是作用域的不同
//	system("pause");
//	return 0;
//}
//int main(){
//	int i = 0; {
//		for (i = 0; i < 10; i++){
//			printf("%d ", i);
//		}
//	}
//	printf("i=%d\n", i);
//	system("pause");
//	return 0;
//}