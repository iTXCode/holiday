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
	val = (TreeNode *)malloc(sizeof(TreeNode));//传上来的为空结点所以需要申请
	val->data = 0;                             //空间 
	val->left = NULL;
	val->right = NULL;
}
void CreateBiTree(TreeNode **T)      //创建二叉树
{
	char tree;              //定义的tree变量用来接收创建二叉树时输入的字符
	scanf("%c", &tree);

	if (tree == '#')
		(*T) = NULL;
	else
	{
		(*T) = (TreeNode*)malloc(sizeof(TreeNode));//为新节点申请空间
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
	// root为你所创建二叉树的根节点，value为你要查找的对象
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
	printf("****1.按先序打印    2.按中序打印****\n");
	printf("****3.按后序打印    4.查找元素  ****\n");
	printf("************ 0.退出程序 ************\n");
	printf("************************************\n");
}
void test()
{
	char CH;
	TreeNode *val = NULL;
	InitFindVal(val);//初始化二叉树结点
	printf("创建二叉树:");
	CreateBiTree(&val);
	int input;
	do{
		menu();
		printf("请输入你的选择:");
		scanf("%d", &input);
		switch (input){
		case 1:
			printf("按先序遍历打印二叉树:");
			preorderTrave(val);
			printf("\n");
			break;
		case 2:
			printf("按中序遍历打印二叉树:");
			inorderTrave(val);
			printf("\n");
			break;
		case 3:
			printf("按后序遍历打印二叉树:");
			posorderTrave(val);
			printf("\n");
			break;
		case 4:
			printf("请输入你要查找的对象:");
			//fflush(stdin);     //从该行开始往下的三行都是为了
			//scanf(" %c",&CH);  //解决输入二叉树序列时在缓冲区
			scanf("\n%c", &CH);  //的输入缓冲区问题
			TreeNode *find_result = Find(val, CH);
			printf("你查找的对象是:");
			printf("%c\n", find_result->data);
			break;
		case 0:
			printf("退出程序.\n");
			break;
		default:
			printf("输入错误,请重新输入.");
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