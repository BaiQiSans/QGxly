#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "../head/LQueue.h" 
#include <stdio.h>
#include <stdlib.h>

/**
 *  @name        : void InitLQueue(LQueue *Q)
 *    @description : ��ʼ������
 *    @param         Q ����ָ��Q
 *  @notice      : None
 */
void stringcopy(void* a,void* b, int size);

void InitLQueue(LQueue *Q)//��ʼ������
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

void DestoryLQueue(LQueue *Q)//���ٶ���
{
	if(Q->front==NULL)
	{
		printf("����δ��ʼ��\n");
	}
	ClearLQueue(Q);
	free(Q->front);

}

Status IsEmptyLQueue(const LQueue *Q)//�������Ƿ�Ϊ��
{
	if(Q->front==NULL)
	{
		printf("����δ��ʼ��\n");
		return FALSE;
	}
	if(Q->length==0)
	{
		return TRUE;
	}
	printf("���в�Ϊ��\n");
	return FALSE;
}

Status GetHeadLQueue(LQueue *Q, void *e)//�鿴��ͷԪ��
{
	if(Q->front==NULL)
	{
		printf("����δ��ʼ��\n");
		return FALSE;
	}
	if(IsEmptyLQueue(Q)==TRUE)
	{
		printf("����һ���ն���\n");
		return FALSE;
	}
	stringcopy(e,Q->front->data,21);
	LPrint(Q->front->data,Q->front->type);
	return TRUE;
}

int LengthLQueue(LQueue *Q)//ȷ�����г���
{
	if(Q->front==NULL)
	{
		printf("����δ��ʼ��\n");
		return FALSE;
	}
	return Q->length;
}

Status EnLQueue(LQueue *Q, void *data)//��Ӳ���
{
	if(Q->front==NULL)
	{
		printf("����δ��ʼ��\n");
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
	printf("��ӳɹ�\n");
	return TRUE;
}

Status DeLQueue(LQueue *Q)//���Ӳ���
{
	if(Q->front==NULL)
	{
		printf("����δ��ʼ��\n");
		return FALSE;
	}
	if(IsEmptyLQueue(Q)==TRUE)
	{
		printf("����һ���ն���\n");
		return FALSE;
	}
	Q->front=Q->front->next;
	Q->length--;
	printf("���ӳɹ�\n");
	return TRUE;
}

void ClearLQueue(LQueue *Q)//��ն���
{
	if(Q->front==NULL)
	{
		printf("����δ��ʼ��\n");
	}
	Q->front=Q->rear;
	Q->length=0;
	printf("��ն��гɹ�\n");
}

Status TraverseLQueue(const LQueue *Q, void (*foo)(void *q,char Datatype))//��������
{
	if(Q->front==NULL)
	{
		printf("����δ��ʼ��\n");
		return FALSE;
	}
	if(IsEmptyLQueue(Q)==TRUE)
	{
		printf("����һ���ն���\n");
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
			printf("                                  __*                 �Ƿ����룬���ٴγ��ԣ�               *__\n"); 
			printf("                                  __*            ******************************            *__\n");
			printf("                                  ____________________________________________________________\n");//�Ƿ����� 
		}
		else
		{
			for(i=0,num=0;str[i]!='\0';i++)
			{
				if(i==0)
				{
					if (str[i] == '-' || str[i] == '+')
						continue;//��һλ�Ƿ���λ ���� 
					else
					{
					num = atoi(str);
					}//���Ƿ���λ ���ӵ�num�� 
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
				printf("                                  __*                ����̫���ˣ����������룡              *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");//̫���� 
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
				if (str[i] < '0' || str[i] > '9')//����������� 
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
					continue;//��һλ�Ƿ���λ ���� 
				else
				{
				num = atoi(str);
				}//���Ƿ���λ ���ӵ�num�� 
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
			if ((str[i] < 'a' || str[i] > 'z')&&(str[i] < 'A' || str[i] > 'Z'))//��������ַ��������� 
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
		printf("                                  __*               �Ƿ����룬������һ�ΰɣ�               *__\n"); 
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
					continue;//��һλ�Ƿ���λ ���� 
				else
				{
				*num = atoi(str);
				}//���Ƿ���λ ���ӵ�num�� 
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
