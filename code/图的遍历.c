#include<stdio.h>
#include<stdlib.h>
 
#define OK 1
#define ERROR 0
#define MAX_VERTAX_SIZE 20
 
typedef char VerElemType;
typedef char ElemType;

 
typedef struct Graph
{
	VerElemType VertaxMatrix[MAX_VERTAX_SIZE];		
	int AdjacentMatrix[MAX_VERTAX_SIZE][MAX_VERTAX_SIZE];	
	int VertaxNum;						
	int EageNum;						
}Graph;
 
//���У���ͼ�Ĺ�����ȱ�����ʹ��
typedef struct QueueNode
{
	ElemType data;
	struct QueueNode* next;
}QueueNode, *QueueNodePtr;
typedef struct Queue{
	QueueNodePtr front;
	QueueNodePtr rear;
}Queue;

void menu( )
{
	printf("********************\n");
	printf("***1.������ȱ���***\n");
	printf("***2.������ȱ���***\n");
	printf("*****0.�˳�����*****\n");
	printf("********************\n");
}
 
int InitQueue(Queue* q)                 //��ʼ������
{
	(*q).front = (QueueNodePtr)malloc(sizeof(struct QueueNode));
	(*q).rear = (*q).front;
	(*q).rear->next = NULL;
	return OK;
}
int EnterQueue(Queue* q, ElemType e)    //����
{
	QueueNodePtr n;
	n = (QueueNode*)malloc(sizeof(struct QueueNode));
	n->data = e;
	n->next = q->rear->next;
	q->rear->next = n;
	q->rear = n;
	return OK;
}
int DeleteQueue(Queue* q, ElemType* e) //����
{
	QueueNodePtr p;
	if( q->front == q->rear )
	{
		printf("Empty\n");
		return ERROR;
	}
	p = q->front->next;
	*e = p->data;
	q->front->next = p->next;
	free(p);
	if( p == q->rear )
		q->rear = q->front;
	return OK;
}

int IsQueueEmpty(Queue q)     //�ж϶����Ƿ�Ϊ��
{
	return q.front == q.rear ? OK : ERROR;
}
 
//��λĳ��������±�
int LocateVertax(Graph G, VerElemType ver)
{ 
	int i;
	for( i = 0; i < G.VertaxNum; i++ )
	{
		if( G.VertaxMatrix[i] == ver )
			return i;
	}
	return -1;
}

int CreateUndigraph(Graph* G)     //��������ͼ
{
	int i,j,k;
	VerElemType x,y;
	printf("����ͼ\n");
	printf("�����붥��ͻ�����Ŀ: ");
	scanf("%d %d%*c",&(*G).VertaxNum, &(G->EageNum));
 
	printf(" �����붥��Ԫ�ص�ֵ��");
	for( i = 0; i < G->VertaxNum; i++ )
	{		
		scanf("%c%*c", &(G->VertaxMatrix[i]));
	}
	
	for( i = 0; i < G->VertaxNum; i++ )		

		for( j = 0; j < G->VertaxNum; j++ )
			G->AdjacentMatrix[i][j] = 0;
	printf("�������й����ߵ�����: "  );
	for( k = 0; k < G->EageNum; k++ )
	{
		
		scanf("%c %c%*c", &x, &y);
		i = LocateVertax(*G, x);
		j = LocateVertax(*G, y);
		G->AdjacentMatrix[i][j] = G->AdjacentMatrix[j][i] = 1;
	}
	return OK;
}
 
//ͼ��������ȱ���
//����v�ĵ�һ���ڽӶ��㣬��û���ڽӶ��㣬����-1
int FirstAdjacentVertax(Graph G, VerElemType v)
{
	int index_v = LocateVertax(G, v);
	int i;
	for( i = 0; i < G.VertaxNum; i++ )
	{
		if( G.AdjacentMatrix[index_v][i] == 1)
			return i;
	}
	return -1;
}
//w��v���ڽӵ㣬����v�ĳ���w(��w��ʼ)����һ���ڽӶ��㣬û���򷵻�-1
int NextAdjacentVertax(Graph G, VerElemType v, VerElemType w)
{
	int index_v = LocateVertax(G, v);
	int index_w = LocateVertax(G, w);
	int i;
	for( i = index_w + 1; i < G.VertaxNum; i++ )
	{
		if( G.AdjacentMatrix[index_v][i] == 1 )
			return i;
	}
	return -1;
}
//			��v�ĵ�һ�ڽӵ㿪ʼ������ȱ�����
//			Ȼ���v�ĵڶ��ڽӿ�ʼ������ȱ�����ֱ��û���ڽӵ�
 
int visitedArray[MAX_VERTAX_SIZE];
void visit(VerElemType c)
{
	printf("%c ", c);
}
VerElemType GetVertaxValue(Graph G, int position)
{
	return G.VertaxMatrix[position];
}
int DFS(Graph G, VerElemType v)
{		//Depth First Search
	VerElemType w;
	visit(v);
	visitedArray[LocateVertax(G, v)] = 1;
 
	for(w = GetVertaxValue(G, FirstAdjacentVertax(G, v));
	LocateVertax(G, w) != -1; w = GetVertaxValue(G, NextAdjacentVertax(G, v, w)))
	{
		if( visitedArray[LocateVertax(G, w)] != 1 )
			DFS(G, w);
	}
	return OK;
}
int DFSTraverse(Graph G)
{
	int i;
	for( i = 0; i < G.VertaxNum; i++ )
	{
		visitedArray[i] = 0;
	}
	for( i = 0; i < G.VertaxNum; i++)
	{
		if( visitedArray[i] == 0 )
		{
			DFS(G, GetVertaxValue(G, i));
		}
	}
	return OK;
}
//����һ��������ӣ������е�Ԫ�س��ӣ����û�з��ʹ��������visit���ʣ��������е��ڽӶ������
int BFSTraverse(Graph G)
{
	ElemType c;
	Queue q;
	InitQueue(&q);
	int i,j;
	for( i = 0; i < G.VertaxNum; i++ )
		visitedArray[i] = 0;
 
	for( i = 0; i < G.VertaxNum; i++ )
	{
		if( visitedArray[i] == 0 )
		{	
			EnterQueue(&q, G.VertaxMatrix[i]);
			visitedArray[i] = 1;				
			while( IsQueueEmpty(q) != OK )
			{
				DeleteQueue(&q, &c);			//��������Ķ��Ǳ༭Ϊ���ʹ����������ﲻ�����ظ��ĵ����
				visit(c);
				for( j = FirstAdjacentVertax(G, c); j != -1; j = NextAdjacentVertax(G, c, GetVertaxValue(G, j))){
					if( visitedArray[j] == 0 ){
						EnterQueue(&q, GetVertaxValue(G, j));
						visitedArray[j] = 1;	//��������Ķ��Ǳ༭Ϊ���ʹ����������ﲻ�����ظ��ĵ����
					}
				}
			}
		}
	}
 
return 0;
}
 
int main()
{
	Graph G;
	CreateUndigraph(&G);
	int input; 
	do
	{
		menu( );
	    scanf("%d",&input); 
		switch(input)
		{
			case 1:
			printf("������ȱ���Ϊ:\n");
	        DFSTraverse(G);
	        printf("\n");
	        break;
	        case 2:
	        printf("������ȱ���Ϊ:\n");
	        BFSTraverse(G);
	        printf("\n");
	        break;
	        case 0:
	        printf("�˳�����\n");
	        break;
	        default:
	        	printf("�������,����������>");
	        	
		}
	  
    }while(input);
	printf("\n");
	return 0;	
}

