#include<stdio.h>
#include <stdlib.h>
#include"../head/LinkStack.h"
LinkStack *s;
LinkStack *s2;
int compare(char a,char b);
	
int q=1;
int main()
{
	s=(LinkStack *)malloc(sizeof(LinkStack));
	s2=(LinkStack *)malloc(sizeof(LinkStack));
		ElemType *data3;
		ElemType *data4;
		ElemType2*data5;
		ElemType2*undata;
		data3=(ElemType *)malloc(sizeof(ElemType));
		data4=(ElemType *)malloc(sizeof(ElemType));
		data5=(ElemType2 *)malloc(sizeof(ElemType2));
		undata=(ElemType2 *)malloc(sizeof(ElemType2));
	initLStack(s);
	initLStack(s2);
	char a[100]={"byBaiQi"};
	int i;
		double math;
  
  while(1){
  			printf("                                  ----------------------（不支持多位数）----------------------\n");
  			printf("                                  ____________________________________________________________\n");
			printf("                                  __*            ******************************            *__\n");
			printf("                                  __*                  请输入想计算的式子！                *__\n"); 
			printf("                                  __*            ******************************            *__\n");
			printf("                                  ____________________________________________________________\n");
  scanf("%s",a);
	 i=0;
	char k;
	k='0';
	double temp2;
	for(i=0;a[i]!='\0';i++)
	{
	    double temp;
		if(a[i]>='0'&&a[i]<='9')
		{
		
			math=(double)(a[i]-'0');
			pushLStack(s,math);
			continue ;
		}
		if(a[i]=='(')
		{
			pushLStack2(s2,a[i]);
			for(;a[i]!='\0';i++)
			{  
			if(a[i]==')')
			{
				break;
			}
			if(a[i]>='0'&&a[i]<='9')
		    {
			math=(a[i]-'0');
			pushLStack(s,math);
			continue ;
	     	}
	     	if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/')
		   {
			if(a[i-2]=='(')
			{
				pushLStack2(s2,a[i]);
				continue ;
			}
			if(compare(a[i],s2->top->data2)==1)
			{
				pushLStack2(s2,a[i]);
				continue;
			}
			if(compare(a[i],s2->top->data2)==0)
			{
			   	popLStack2(s2,data5);
				k=*data5;
				pushLStack2(s2,a[i]);
			}
			if(compare(a[i],s2->top->data2)==-1)
			{
				popLStack2(s2,data5);
				k=*data5;
				pushLStack2(s2,a[i]);
			}
			
		}
			switch(k)
		{
			case '+':{
				if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=*data3+*data4;
					pushLStack(s,temp2);
					
				}
				break;
			}
			case '-':{
				if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=*data4-*data3;
					pushLStack(s,temp2);
					
				}
				break;
			}
			case '*':{
				if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=(*data3)*(*data4);
					pushLStack(s,temp2);
					
				}
				break;
			}
			case '/':{
					if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=(*data4)/(*data3);
					pushLStack(s,temp2);
					
				}
				break;
			}
			default:
				break;
		}
	     	
			}
			
			while(s2->top->data2!='(')
	{
		popLStack2(s2,data5);
		k=*data5;
			switch(k)
		{
			case '+':{
				if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=(*data3)+(*data4);
					pushLStack(s,temp2);
					
				}
				break;
			}
			case '-':{
				if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=(*data4)-(*data3);
					pushLStack(s,temp2);
					
				}
				break;
			}
			case '*':{
				if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=(*data3)*(*data4);
					pushLStack(s,temp2);
					
				}
				break;
			}
			case '/':{
					if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=(*data4)/(*data3);
					pushLStack(s,temp2);
					
				}
				break;
			}
			default:
				break;
		}	
		}
		popLStack2(s2,undata);
		continue;
	}
		if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/')
		{
			if(s2->count==0)
			{
				pushLStack2(s2,a[i]);
				continue ;
			}
			if(compare(a[i],s2->top->data2)==1)
			{
				pushLStack2(s2,a[i]);
				continue;
			}
			if(compare(a[i],s2->top->data2)==0)
			{
			   	popLStack2(s2,data5);
				k=*data5;
				pushLStack2(s2,a[i]);
			}
			if(compare(a[i],s2->top->data2)==-1)
			{
				popLStack2(s2,data5);
				k=*data5;
				pushLStack2(s2,a[i]);
			}
			
		}
		
		switch(k)
		{
			case '+':{
				if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=*data3+*data4;
					pushLStack(s,temp2);
					
				}
				break;
			}
			case '-':{
				if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=*data4-*data3;
					pushLStack(s,temp2);
					
				}
				break;
			}
			case '*':{
				if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=(*data3)*(*data4);
					pushLStack(s,temp2);
					
				}
				break;
			}
			case '/':{
					if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=(*data4)/(*data3);
					pushLStack(s,temp2);
					
				}
				break;
			}
			default:
				break;
		}
		k='0';
	}
	
	while(s2->count!=0)
	{
		popLStack2(s2,data5);
		k=*data5;
			switch(k)
		{
			case '+':{
				if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=(*data3)+(*data4);
					pushLStack(s,temp2);
					
				}
				break;
			}
			case '-':{
				if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=(*data4)-(*data3);
					pushLStack(s,temp2);
					
				}
				break;
			}
			case '*':{
				if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=(*data3)*(*data4);
					pushLStack(s,temp2);
					
				}
				break;
			}
			case '/':{
					if(s->count>=2)
				{
					popLStack(s,data3);
					popLStack(s,data4);
					temp2=(*data4)/(*data3);
					pushLStack(s,temp2);
					
				}
				break;
			}
			default:
				break;
		}
	k='0';
		
		
		
	} 

  double finalmath;
	ElemType *final1;
	final1=(ElemType *)malloc(sizeof(ElemType));
	popLStack(s,final1);
	finalmath=*final1;
	printf("计算结果是%f\n",finalmath);
	q=0;
	  		printf("                                  ____________________________________________________________\n");
			printf("                                  __*            ******************************            *__\n");
			printf("                                  __*               01 继续计算     00 退出                *__\n"); 
			printf("                                  __*            ******************************            *__\n");
			printf("                                  ____________________________________________________________\n");
	scanf("%d",&q);
	if(q==0)
	{
		break;
	}
	
}

return 0;	
}

int compare(char a,char b)
{
	if((a=='*'||a=='/')&&(b=='*'||b=='/'))
	{
		return 0;
	}
		if((a=='+'||a=='-')&&(b=='+'||b=='-'))
	{
		return 0;
	}
		if((a=='*'||a=='/')&&(b=='-'||b=='+'))
	{
		return 1;
	}
		if((a=='-'||a=='+')&&(b=='*'||b=='/'))
	{
		return -1;
	}
	
}
//       	printf("                                  _________________________________________________________________\n");
//		printf("                                  __*                      ******************                   *__\n");
//		printf("                                  __                   输入相应编码进入您的选择                  __\n"); 
//		printf("                                  __                                                             __\n");
//		printf("                                  __                 01  初始化           02  入栈               __\n"); 
//		printf("                                  __                 03  出栈             04  清空链栈           __\n");
//		printf("                                  __                 05  销毁链栈         06  获取栈长度         __\n");
//		printf("                                  __                 07  栈是否为空       08  获得栈顶           __\n");
//		printf("                                  __                            09 退出                          __\n");
//		printf("                                  __*                       ******************                  *__\n");
//		printf("                                  _________________________________________________________________\n"); 
//        
//
//        switch(InputCheck())
//        {
//            case 1:
//                initLStack(head);
//                flag = 1;
//                break;
//            case 2:
//                if(flag == 1)
//                {
//					printf("                                  ____________________________________________________________\n");
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  __*                  请输入想入栈的数据！                *__\n"); 
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  ____________________________________________________________\n");
//                    pushLStack(head, InputCheck());
//                }
//                else
//                {
//                  	printf("                                  ____________________________________________________________\n");
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  __*                  是不是忘记初始化了！                *__\n"); 
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  ____________________________________________________________\n");
//                }
//                break;
//            case 3:
//                if(flag == 1)
//                {
//                    ElemType *e = (ElemType*)malloc(sizeof(ElemType));
//                    popLStack(head, e);
//                }
//                else
//                {
//					printf("                                  ____________________________________________________________\n");
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  __*                  是不是忘记初始化了！                *__\n"); 
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  ____________________________________________________________\n");
//                }
//                break;
//            case 4:
//                if(flag == 1)
//                {
//                    clearLStack(head);
//                }
//                else
//                {
//					printf("                                  ____________________________________________________________\n");
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  __*                  是不是忘记初始化了！                *__\n"); 
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  ____________________________________________________________\n");
//                }
//                break;
//            case 5:
//                if(flag == 1)
//                {
//                    destroyLStack(head);
//                    flag = 0;
//                }
//                else
//                {
//					printf("                                  ____________________________________________________________\n");
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  __*                  是不是忘记初始化了！                *__\n"); 
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  ____________________________________________________________\n");
//                }
//                break;
//            case 6:
//                {
//                    int *length = (int*)malloc(sizeof(int));
//                    LStackLength(head, length);
//                }
//                break;
//            case 7:
//                if(flag == 1)
//                {
//                    isEmptyLStack(head);
//                }
//                else
//                {
//					printf("                                  ____________________________________________________________\n");
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  __*                  是不是忘记初始化了！                *__\n"); 
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  ____________________________________________________________\n");
//                }
//                break;
//            case 8:
//                if(flag == 1)
//                {
//                    ElemType *e = (ElemType*)malloc(sizeof(ElemType));
//                    getTopLStack(head, e);
//                }
//                else
//                {
//					printf("                                  ____________________________________________________________\n");
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  __*                  是不是忘记初始化了！                *__\n"); 
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  ____________________________________________________________\n");
//                }
//                break;
//            case 9:
//					printf("                                  ____________________________________________________________\n");
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  __*                       退出成功！                     *__\n"); 
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  ____________________________________________________________\n");
//                exit(0);
//                break;
//            default:
//					printf("                                  ____________________________________________________________\n");
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  __*                       输入错误！                     *__\n"); 
//					printf("                                  __*            ******************************            *__\n");
//					printf("                                  ____________________________________________________________\n");
//        }

