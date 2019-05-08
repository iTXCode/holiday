#define _CRT_SECUER_NO_WARNINGS 1


#include<stdio.h>
#include<windows.h>

//extern 是用来声明外部符号的
void Add(){
	//修饰局部变量
	static int a=1;
	a++;
	printf("%d ",a);
}
//全局变量被static修饰时改变的
//是被修饰对象的作用域
int main(){
	//static 
		//修饰变量
		             //修饰局部变量
		            //修饰全局变量
		//修饰函数
	int i = 0;
	for (i = 0; i < 5; i++){
		Add();
	}
	system("pause");
	return 0;
}


//#include<stdio.h>
//#include<windows.h>
//int main(){
//	int num = 15;
//	//0000 0000 0000 0000 0000 0000 0000 1111
//	num = num >> 2;
//	//0000 0000 0000 0000 0000 0000 0000 0011
//	printf("%d\n",num);
//	//此时的num中存储的属的大小为3
//	system("pause");
//	return 0;
//}
