#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<windows.h>
//struct student{
//	//结构体不能为空
//}stu;
//int main(){
//	printf("%d\n",sizeof(stu));
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//int main(){
//	extern double j;
//	extern double j = 3;
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//extern void fun(void)
//{
//	printf("hehe\n");
//	
//}
//int main(){
//	fun();
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//void fun(void)
//{
//	printf("hehe\n");
//}
//int main(){
//	int i = 10;
//	fun();
//	system("pause");
//	return 0;
//}


//
//#include<stdio.h>
//#include<windows.h>
//
//int main(){
//	const volatile int i = 10;
//	int j = i;
//	int k = i;
//	printf("%d\n", i);
//	printf("%d\n", j);
//	printf("%d\n", k);
//	system("pause");
//	return 0;
//}
//这是C语言深度剖析里面的一个问题P35。
//在网上查了下，感觉讲得不够简洁。这里我来小结一下：
//
//const修饰的是只读变量，变量在初始化被赋了初值就不能被改变，
//就是 readonly变量了。
//valatile关键字修饰的变量表示让编译器不要做没谱的优化，
//告诉编译器改变量是随时可变的。举个例子：
//int i = 10;
//int j = i;
//int k = i;
//以上代码编译器会对代码进行优化，int j = i时，
//编译器会从内存中把i的值取出来赋值给j，
//此时改值并没有被丢掉，在编译int k = i 时，
//编译器继续把之前取出的值赋值给k。现在来看另一个例子
//volatile int i = 10;
//int j = i;
//int k = i;

//当用volatile修饰时，表示i时随时可变的，
//所以编译器在把int j = i; int k = i
//两句代码编译为汇编时会两次都直接从内存中去取i的值。
//现在再来看const volatile int i = 10; 
//实际上此声明表示的申明了一个const int型的变量，
//所以i是只读变量，不能被修改。
//同时i又被volatile修饰了，意思就是说不允许编译器优化代码，
//在代码中每次用到i时都要直接从内存中去取数。
//所以，虽然const volatile int i = 10; 
//定义没错，但是这样的定义没有什么实际的意义。
//

//#include<stdio.h>
//#include<windows.h>
//
//int main(){
//	volatile int i = 10;
//	int j = i;
//	int k = i;
//	printf("%d\n", i);
//	printf("%d\n", j);
//	printf("%d\n", k);
//	system("pause");
//	return 0;
//}
//



//#include<stdio.h>
//#include<windows.h>
//
//int main(){
//	int i = 10;
//	int j = i;
//	int k = i;
//		printf("%d\n",i);
//	printf("%d\n", j);
//	printf("%d\n", k);
//	system("pause");
//	return 0;
//}

//
//#include<stdio.h>
//#include<windows.h>
//
//void print(int arr[], int size){
//	for (int i = 0; i < size;i++){
//		printf("%d ",arr[i]);
//	}
//}
//
//int main(){
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < 10; i++){
//		scanf("%d",&arr[i]);
//	}
//	print(arr,sz);
//	printf("\n");
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>

//int Add(int x, int y){
//	int  And = 0;
//	And = x + y;
//	return And;
//}
//
//
//void print(int ha){
//	printf("两数之和=%d\n",ha);
//}
//
//int main(){
//	int num1;
//	int num2;
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);
//	sum=Add(num1, num2);
//	print(sum);
//	system("pause");
//	return 0;
//}