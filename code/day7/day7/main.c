#define _CRT_SECUER_NO_WARNINGS 1


#include<stdio.h>
#include<windows.h>

//extern �����������ⲿ���ŵ�
void Add(){
	//���ξֲ�����
	static int a=1;
	a++;
	printf("%d ",a);
}
//ȫ�ֱ�����static����ʱ�ı��
//�Ǳ����ζ����������
int main(){
	//static 
		//���α���
		             //���ξֲ�����
		            //����ȫ�ֱ���
		//���κ���
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
//	//��ʱ��num�д洢�����Ĵ�СΪ3
//	system("pause");
//	return 0;
//}
