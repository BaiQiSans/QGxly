#include"../head/LinkStack.h"
#include<stdio.h>
#include <stdlib.h>

Status initLStack(LinkStack *s)//初始化栈
{
	s->top=(StackNode*)malloc(sizeof(StackNode));
	s->count=0;
	return SUCCESS;
}

Status isEmptyLStack(LinkStack *s)//判断栈是否为空
{
  if(s->count==0)
  {
  	printf("这是一个空栈");
  	return SUCCESS;
  }
  printf("这不是一个空栈");
  return SUCCESS;
}

Status getTopLStack(LinkStack *s,ElemType *e)//得到栈顶元素
{
  if(s->count==0)
  {
  	printf("这是一个空栈");
  	return SUCCESS;
  }
  *e=s->top->data;
  return SUCCESS;
}
  
Status clearLStack(LinkStack *s)//清空栈
{
	if(s->count==0)
  {
  	printf("这是一个空栈");
  	return ERROR;
  }
	s->count=0;
	s->top->next=NULL;
	return SUCCESS;
	
}

Status destroyLStack(LinkStack *s)//销毁栈
{
	free(s->top);
	free(s);
	return SUCCESS;
}

Status LStackLength(LinkStack *s,int *length)//检测栈长度
{
	*length=s->count;
	return SUCCESS;
}

Status pushLStack(LinkStack *s,ElemType data)//入栈
{
	StackNode* sn=(StackNode*)malloc(sizeof(StackNode));
	sn->data=data;
	sn->next=s->top;
	s->top=sn;
	s->count++;
	return SUCCESS;
}

Status pushLStack2(LinkStack *s,ElemType2 data2)//入栈
{
	StackNode* sn=(StackNode*)malloc(sizeof(StackNode));
	sn->data2=data2;
	sn->next=s->top;
	s->top=sn;
	s->count++;
	return SUCCESS;
}
Status popLStack(LinkStack *s,ElemType *data)//出栈
{
	*data=s->top->data;
	s->top=s->top->next;
	s->count--;
	return SUCCESS;
}

Status popLStack2(LinkStack *s,ElemType2 *data2)//出栈
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
				//错误 再来.
				 status=ERROR;
			}
		}
	}while(status==ERROR);
	return str1;
}*/

