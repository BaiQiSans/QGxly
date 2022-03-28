#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "../head/LQueue.h" 
#include <stdio.h>
#include <stdlib.h>

/**
 *  @name        : void InitLQueue(LQueue *Q)
 *    @description : 初始化队列
 *    @param         Q 队列指针Q
 *  @notice      : None
 */
void stringcopy(void* a,void* b, int size);

void InitLQueue(LQueue *Q)//初始化队列
{
	Q->front=(Node *)malloc(sizeof(Node));
//	Q->front->next=(Node *)malloc(sizeof(Node));
	Q->front->data=(void*)malloc(21);
	Q->front->next=NULL;
	if(Q->front!=NULL)
	{
		Q->rear=Q->front;
		Q->rear->next=NULL;
	}
	Q->length=0;
}

void DestoryLQueue(LQueue *Q)//销毁队列
{
	if(Q->front==NULL)
	{
		printf("队列未初始化\n");
	}
	ClearLQueue(Q);
	free(Q->front);

}

Status IsEmptyLQueue(const LQueue *Q)//检查队列是否为空
{
	if(Q->front==NULL)
	{
		printf("队列未初始化\n");
		return FALSE;
	}
	if(Q->length==0)
	{
		return TRUE;
	}
	printf("队列不为空\n");
	return FALSE;
}

Status GetHeadLQueue(LQueue *Q, void *e)//查看队头元素
{
	if(Q->front==NULL)
	{
		printf("队列未初始化\n");
		return FALSE;
	}
	if(IsEmptyLQueue(Q)==TRUE)
	{
		printf("这是一个空队列\n");
		return FALSE;
	}
	stringcopy(e,Q->front->data,21);
	LPrint(Q->front->data,Q->front->type);
	return TRUE;
}

int LengthLQueue(LQueue *Q)//确定队列长度
{
	if(Q->front==NULL)
	{
		printf("队列未初始化\n");
		return FALSE;
	}
	return Q->length;
}

Status EnLQueue(LQueue *Q, void *data)//入队操作
{
	if(Q->front==NULL)
	{
		printf("队列未初始化\n");
		return FALSE;
	}
	Node *p;
	p=(Node *)malloc(sizeof(Node));
	p->data=(void*)malloc(21);
	stringcopy(p->data,data,21);
	p->next=NULL;
	if(Q->length==0)
	{
		Q->front=p;
	}else {
		Q->rear->next=p;
	}
	Q->rear=p;
	Q->length++;
	printf("入队成功\n");
	return TRUE;
}

Status DeLQueue(LQueue *Q)//出队操作
{
	if(Q->front==NULL)
	{
		printf("队列未初始化\n");
		return FALSE;
	}
	if(IsEmptyLQueue(Q)==TRUE)
	{
		printf("这是一个空队列\n");
		return FALSE;
	}
	Q->front=Q->front->next;
	Q->length--;
	printf("出队成功\n");
	return TRUE;
}

void ClearLQueue(LQueue *Q)//清空队列
{
	if(Q->front==NULL)
	{
		printf("队列未初始化\n");
	}
	Q->front=Q->rear;
	Q->length=0;
	printf("清空队列成功\n");
}

Status TraverseLQueue(const LQueue *Q, void (*foo)(void *q,char Datatype))//遍历队列
{
	if(Q->front==NULL)
	{
		printf("队列未初始化\n");
		return FALSE;
	}
	if(IsEmptyLQueue(Q)==TRUE)
	{
		printf("这是一个空队列\n");
		return FALSE;
	}
   	Node *p=NULL;
	p=(Node *)malloc(sizeof(Node));
	p->data=(void*)malloc(21);
	p=Q->front;	
	while(p->next!=NULL){
		foo(p->data,p->type);
		p=p->next;
	}
	foo(p->data,p->type);
	return TRUE;
 } 


void LPrint(void *q,char Datatype)
    {
        if(Datatype == 'd')
            printf("--> %.2lf", *(double*)q);
        if(Datatype == 'c')
            printf("--> %c", *(char*)q);
        if(Datatype == 'i')
            printf("--> %d ", *(int*)q);
        if(Datatype == 's')
            printf("--> %s ", (char*)q);
    }
void stringcopy(void* a,void* b, int size){
	int i;
    for( i = 0 ; i < size ; i ++){
        ((char*)a)[i] = ((char*)b)[i];
    }
}

int InputCheck(){
	int num=0,status=0;
	char str[100];
	int i;
	do{
		
		scanf(" %s",str);
		status=TRUE;
		for(i=0;str[i]!='\0';i++)
		{
			if(i==0)
			{
				if (str[i] == '-' || str[i] == '+')
					continue;
			}
			else
			{
				if (str[i] < '0' || str[i] > '9')
				{
					status = FALSE;
					break;
				}
			}
		}
		if(status==FALSE){
			printf("                                  ____________________________________________________________\n");
			printf("                                  __*            ******************************            *__\n");
			printf("                                  __*                 非法输入，请再次尝试！               *__\n"); 
			printf("                                  __*            ******************************            *__\n");
			printf("                                  ____________________________________________________________\n");//非法输入 
		}
		else
		{
			for(i=0,num=0;str[i]!='\0';i++)
			{
				if(i==0)
				{
					if (str[i] == '-' || str[i] == '+')
						continue;//第一位是符号位 跳过 
					else
					{
					num = atoi(str);
					}//不是符号位 增加到num中 
				}			
				else
				{
					num = atoi(str);
				}
			}
			if (str[0] == '-')
            {
				num = -num;
			}
			if (i >= 10)
			{
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*                数据太多了，请重新输入！              *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");//太多了 
				status = FALSE;
			}
		}
	}while (status == FALSE);
	return num;
}

/*int InputInt(){
	int num=0,status=0;
	char str[100];
	int i;
	do{
		fflush(stdin);
		scanf(" %s",str);
		status=TRUE;
		for(i=0;str[i]!='\0';i++)
		{ 
			if(i==0)
			{
				if (str[i] == '-' || str[i] == '+') 
					continue;
			}
			else
			{
				if (str[i] < '0' || str[i] > '9')//如果不是数字 
				{
					status = FALSE;
					break;
				}
			}
		}
		if(status==TRUE){
		int num;
	for(i=0,num=0;str[i]!='\0';i++)	
		{
			if(i==0)
			{
				if (str[i] == '-' || str[i] == '+')
					continue;//第一位是符号位 跳过 
				else
				{
				num = atoi(str);
				}//不是符号位 增加到num中 
			}			
			else
			{
				*num = atoi(str);
			}
			}
	if (str[0] == '-')
    {
		num = -num;
	}
	return num;
	}
		status=TRUE;
		for(i=0;str[i]!='\n';i++)
		{ 			
			if ((str[i] < 'a' || str[i] > 'z')&&(str[i] < 'A' || str[i] > 'Z'))//如果不是字符，则跳出 
			{
				status = FALSE;
				break;
			}
		}
		if(status==TRUE){void*p=InputChar(str);
		return p;
		}
		printf("                                  ____________________________________________________________\n");
		printf("                                  __*            ******************************            *__\n");
		printf("                                  __*               非法输入，再输入一次吧！               *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	}while(status==FALSE);
}*/

/*char* InputChar(char* str){
	return *str;
}*/

/*int* InputInt(char* str){
	int i,*num;
	for(i=0,*num=0;str[i]!='\0';i++)	
		{
			if(i==0)
			{
				if (str[i] == '-' || str[i] == '+')
					continue;//第一位是符号位 跳过 
				else
				{
				*num = atoi(str);
				}//不是符号位 增加到num中 
			}			
			else
			{
				*num = atoi(str);
			}
			}
	if (str[0] == '-')
    {
		*num = -*num;
	}
	return *num;		
}*/


/**************************************************************
 *    End-Multi-Include-Prevent Section
 **************************************************************/
#endif // LQUEUE_H_INCLUDED
