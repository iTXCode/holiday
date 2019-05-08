#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<windows.h>

typedef struct TreeNode{
	char data;
	struct TreeNode *left;
	struct TreeNode *right;
} TreeNode;


void InitFindVal(TreeNode* val)
{
	val = (TreeNode *)malloc(sizeof(TreeNode));//��������Ϊ�ս��������Ҫ����
	val->data = 0;                             //�ռ� 
	val->left = NULL;
	val->right = NULL;
}
void CreateBiTree(TreeNode **T)      //����������
{
	char tree;              //�����tree�����������մ���������ʱ������ַ�
	scanf("%c", &tree);

	if (tree == '#')
		(*T) = NULL;
	else
	{
		(*T) = (TreeNode*)malloc(sizeof(TreeNode));//Ϊ�½ڵ�����ռ�
		(*T)->data = tree;
		CreateBiTree(&(*T)->left);
		CreateBiTree(&(*T)->right);
	}
}
void preorderTrave(TreeNode* root)
{
	if (root == NULL){
		return;
	}
	printf("%c", root->data);
	preorderTrave(root->left);
	preorderTrave(root->right);

}
void inorderTrave(TreeNode* root)
{
	if (root == NULL){
		return;
	}
	inorderTrave(root->left);
	printf("%c", root->data);
	inorderTrave(root->right);

}
void posorderTrave(TreeNode* root)
{
	if (root == NULL){
		return;
	}
	posorderTrave(root->left);
	posorderTrave(root->right);
	printf("%c", root->data);
}

struct TreeNode* Find(TreeNode* root, char value)
{
	// rootΪ���������������ĸ��ڵ㣬valueΪ��Ҫ���ҵĶ���
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == value)
		return root;
	struct TreeNode* L = Find(root->left, value);
	if (L != NULL)
	{
		return L;
	}
	struct TreeNode* R = Find(root->right, value);
	if (R != NULL)
	{
		return R;
	}
	else
	{
		return NULL;
	}
}
void menu(){
	printf("************************************\n");
	printf("****1.�������ӡ    2.�������ӡ****\n");
	printf("****3.�������ӡ    4.����Ԫ��  ****\n");
	printf("************ 0.�˳����� ************\n");
	printf("************************************\n");
}
void test()
{
	char CH;
	TreeNode *val = NULL;
	InitFindVal(val);//��ʼ�����������
	printf("����������:");
	CreateBiTree(&val);
	int input;
	do{
		menu();
		printf("���������ѡ��:");
		scanf("%d", &input);
		switch (input){
		case 1:
			printf("�����������ӡ������:");
			preorderTrave(val);
			printf("\n");
			break;
		case 2:
			printf("�����������ӡ������:");
			inorderTrave(val);
			printf("\n");
			break;
		case 3:
			printf("�����������ӡ������:");
			posorderTrave(val);
			printf("\n");
			break;
		case 4:
			printf("��������Ҫ���ҵĶ���:");
			//fflush(stdin);     //�Ӹ��п�ʼ���µ����ж���Ϊ��
			//scanf(" %c",&CH);  //����������������ʱ�ڻ�����
			scanf("\n%c", &CH);  //�����뻺��������
			TreeNode *find_result = Find(val, CH);
			printf("����ҵĶ�����:");
			printf("%c\n", find_result->data);
			break;
		case 0:
			printf("�˳�����.\n");
			break;
		default:
			printf("�������,����������.");
			break;
		}
	} while (input);
}
int main()
{
	test();
	system("pause");
	return 0;
}