#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<windows.h>
//struct student{
//	//�ṹ�岻��Ϊ��
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
//����C����������������һ������P35��
//�����ϲ����£��о����ò�����ࡣ��������С��һ�£�
//
//const���ε���ֻ�������������ڳ�ʼ�������˳�ֵ�Ͳ��ܱ��ı䣬
//���� readonly�����ˡ�
//valatile�ؼ������εı�����ʾ�ñ�������Ҫ��û�׵��Ż���
//���߱������ı�������ʱ�ɱ�ġ��ٸ����ӣ�
//int i = 10;
//int j = i;
//int k = i;
//���ϴ����������Դ�������Ż���int j = iʱ��
//����������ڴ��а�i��ֵȡ������ֵ��j��
//��ʱ��ֵ��û�б��������ڱ���int k = i ʱ��
//������������֮ǰȡ����ֵ��ֵ��k������������һ������
//volatile int i = 10;
//int j = i;
//int k = i;

//����volatile����ʱ����ʾiʱ��ʱ�ɱ�ģ�
//���Ա������ڰ�int j = i; int k = i
//����������Ϊ���ʱ�����ζ�ֱ�Ӵ��ڴ���ȥȡi��ֵ��
//����������const volatile int i = 10; 
//ʵ���ϴ�������ʾ��������һ��const int�͵ı�����
//����i��ֻ�����������ܱ��޸ġ�
//ͬʱi�ֱ�volatile�����ˣ���˼����˵������������Ż����룬
//�ڴ�����ÿ���õ�iʱ��Ҫֱ�Ӵ��ڴ���ȥȡ����
//���ԣ���Ȼconst volatile int i = 10; 
//����û�����������Ķ���û��ʲôʵ�ʵ����塣
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
//	printf("����֮��=%d\n",ha);
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