#include"../head/LinkStack.h"
#include<stdio.h>
#include <stdlib.h>

Status initLStack(LinkStack *s)//��ʼ��ջ
{
	s->top=(StackNode*)malloc(sizeof(StackNode));
	s->count=0;
	return SUCCESS;
}

Status isEmptyLStack(LinkStack *s)//�ж�ջ�Ƿ�Ϊ��
{
  if(s->count==0)
  {
  	printf("����һ����ջ");
  	return SUCCESS;
  }
  printf("�ⲻ��һ����ջ");
  return SUCCESS;
}

Status getTopLStack(LinkStack *s,ElemType *e)//�õ�ջ��Ԫ��
{
  if(s->count==0)
  {
  	printf("����һ����ջ");
  	return SUCCESS;
  }
  *e=s->top->data;
  return SUCCESS;
}
  
Status clearLStack(LinkStack *s)//���ջ
{
	if(s->count==0)
  {
  	printf("����һ����ջ");
  	return ERROR;
  }
	s->count=0;
	s->top->next=NULL;
	return SUCCESS;
	
}

Status destroyLStack(LinkStack *s)//����ջ
{
	free(s->top);
	free(s);
	return SUCCESS;
}

Status LStackLength(LinkStack *s,int *length)//���ջ����
{
	*length=s->count;
	return SUCCESS;
}

Status pushLStack(LinkStack *s,ElemType data)//��ջ
{
	StackNode* sn=(StackNode*)malloc(sizeof(StackNode));
	sn->data=data;
	sn->next=s->top;
	s->top=sn;
	s->count++;
	return SUCCESS;
}

Status pushLStack2(LinkStack *s,ElemType2 data2)//��ջ
{
	StackNode* sn=(StackNode*)malloc(sizeof(StackNode));
	sn->data2=data2;
	sn->next=s->top;
	s->top=sn;
	s->count++;
	return SUCCESS;
}
Status popLStack(LinkStack *s,ElemType *data)//��ջ
{
	*data=s->top->data;
	s->top=s->top->next;
	s->count--;
	return SUCCESS;
}

Status popLStack2(LinkStack *s,ElemType2 *data2)//��ջ
{
	*data2=s->top->data2;
	s->top=s->top->next;
	s->count--;
	return SUCCESS;
}

/*int InputCheck(){
	int num=0,status=0;
	char str[100];
	int i;
	do{
		
		scanf(" %s",str);
		status=SUCCESS;
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
					status = ERROR;
					break;
				}
			}
		}
		if(status==ERROR){
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
				status = ERROR;
			}
		}
	}while (status == ERROR);
	return num;
}*/

/*char* InputCheck(char* str1){
	int num=0,status=0,j=0;	
	char* str = str1;
//	char newstr[100];
	int i;
	do{		
		status=SUCCESS;
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i] >= '0' && str[i] <= '9'){
				continue;
			}else if(str[i]=='-'||str[i]=='+'||str[i]=='*'||str[i]=='/'){				//newstr[j++]=s[i];
				continue;
			}else{
				//���� ����.
				 status=ERROR;
			}
		}
	}while(status==ERROR);
	return str1;
}*/

