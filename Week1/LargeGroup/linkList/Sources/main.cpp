<<<<<<< HEAD
#include "..\Headers\linkedList.h"
#include <stdio.h>
#include <stdlib.h>

void visit(ElemType e){
	printf(" %.5d\n ",e);//输出数据 
}


int main(){
	LinkedList L=NULL;
	printf("                                  ____________________________________________________________\n");
	printf("                                  __*            ******************************            *__\n");
	printf("                                  __*                欢迎进入ADT单向链表使用               *__\n"); 
	printf("                                  __*            ******************************            *__\n");
	printf("                                  ____________________________________________________________\n");
	system("pause");
	system("cls");
	ElemType order=11;
	while(order){
		order=0;
		Status the_end=(Status)10;
		printf("                                  ________________________________________________________________\n");
		printf("                                  __*                     ******************                   *__\n");
		printf("                                  __                   输入相应编码进入您的选择                 __\n"); 
		printf("                                  __                                                            __\n");
		printf("                                  __           01  初始化链表          02  销毁所有结点         __\n"); 
		printf("                                  __           03  插入链表结点        04  删除链表结点         __\n");
		printf("                                  __           05  遍历所有结点        06  反转链表结点         __\n");
		printf("                                  __           07  判断是否为循环链表  08  切换偶数结点顺序     __\n");
		printf("                                  __           09  寻找链表中点        10  寻找链表结点         __\n");
		printf("                                  __                            00 退出                         __\n");
		printf("                                  __*                      ******************                  *__\n");
		printf("                                  ________________________________________________________________\n");
		scanf(" %d",&order);//操作界面 
		system("cls");
		switch(order){
			case 1:the_end=InitList(&L);//调用初始化函数 
			break;
		case 2:DestroyList(&L);
			break;
			case 3:	{
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*              请输入你想要添加结点的数据！            *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");	
			LNode *q = (LNode*)malloc(sizeof(LNode));//开辟新结点 
			scanf(" %d",&q->data);//输入新结点的数据 
			system("cls");
			the_end=InsertList(L,q);//进行插入操作 
			break;}
			case 4:{				
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*              请输入你想要删除结点的索引！            *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
				int delet;
				scanf(" %d",&delet);
				LinkedList p=L;	
				for(int i=1;i<delet;p=p->next,i++)if(p==NULL){
					printf("                                  ____________________________________________________________\n");
					printf("                                  __*            ******************************            *__\n");
					printf("                                  __*                   输入的索引错误了哦！               *__\n"); 
					printf("                                  __*            ******************************            *__\n");
					printf("                                  ____________________________________________________________\n");
					break;	
				}
				
				//移动到要删除的结点			
			ElemType temp1;
			the_end=DeleteList(p,&temp1);//调用函数进行删除 
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*              你删除的数据为：%d！               *__\n",temp1); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
			break;}
			case 5:{
				
				TraverseList(L,&visit);//遍历 
				break;
			}
			case 6:{
				the_end=ReverseList(&L);//反转 
				break;
			}
			case 7:{
				the_end=IsLoopList(L);//判断是否成环 
				break;
			}
			case 8:{
				L=ReverseEvenList(&L);//反转偶数 
				break;
			}
			case 9:{
				LNode *mid;
				mid=FindMidNode(&L);//判断中点 
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*               中间结点的数值为：%d                *__\n",mid->data); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
				break;
			}
			case 10:{
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*             请输入你想要寻找的结点的数据！           *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");	
				ElemType temp3;
				scanf(" %d",&temp3);
				the_end=SearchList(L,temp3);//查找 
				break;
			}
			case 114514:{
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*             恭喜你通过乱输发现小彩蛋！！！           *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
			}
		}
		if(the_end==SUCCESS){
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*                   执行成功/正确！                    *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
		}else if(the_end==ERROR){
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*                   执行失败/错误！                    *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
		}
		system("pause");
		system("cls");
	}
	
}
=======
#include "..\Headers\linkedList.h"
#include <stdio.h>
#include <stdlib.h>

void visit(ElemType e){
	printf(" %.5d ",e);//输出数据 
}


int main(){
	LinkedList L=NULL;
	printf("                                  ____________________________________________________________\n");
	printf("                                  __*            ******************************            *__\n");
	printf("                                  __*                欢迎进入ADT单向链表使用               *__\n"); 
	printf("                                  __*            ******************************            *__\n");
	printf("                                  ____________________________________________________________\n");
	system("pause");
	system("cls");
	ElemType order=11;
	while(order){
		order=0;
		Status the_end=(Status)10;
		printf("                                  ________________________________________________________________\n");
		printf("                                  __*                     ******************                   *__\n");
		printf("                                  __                   输入相应编码进入您的选择                 __\n"); 
		printf("                                  __                                                            __\n");
		printf("                                  __           01  初始化链表          02  销毁所有结点         __\n"); 
		printf("                                  __           03  插入链表结点        04  删除链表结点         __\n");
		printf("                                  __           05  遍历所有结点        06  反转链表结点         __\n");
		printf("                                  __           07  判断是否为循环链表  08  切换偶数结点顺序     __\n");
		printf("                                  __           09  寻找链表中点        10  寻找链表结点         __\n");
		printf("                                  __                            00 退出                         __\n");
		printf("                                  __*                      ******************                  *__\n");
		printf("                                  ________________________________________________________________\n");
		scanf(" %d",&order);//操作界面 
		system("cls");
		switch(order){
			case 1:the_end=InitList(&L);//调用初始化函数 
			break;
		case 2:DestroyList(&L);
			break;
			case 3:	{
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*              请输入你想要添加结点的数据！            *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");	
			LNode *q = (LNode*)malloc(sizeof(LNode));//开辟新结点 
			LNode *p;
			scanf(" %d",&q->data);//输入新结点的数据 
			system("cls");
			the_end=InsertList(L,q);//进行插入操作 
			break;}
			case 4:{				
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*              请输入你想要删除结点的索引！            *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
				int delet;
				scanf(" %d",&delet);
				LinkedList p=L;	
				for(int i=1;i<delet;p=p->next,i++)if(p==NULL){
					printf("                                  ____________________________________________________________\n");
					printf("                                  __*            ******************************            *__\n");
					printf("                                  __*                   输入的索引错误了哦！               *__\n"); 
					printf("                                  __*            ******************************            *__\n");
					printf("                                  ____________________________________________________________\n");
					break;	
				}
				
				//移动到要删除的结点			
			ElemType temp1;
			the_end=DeleteList(p,&temp1);//调用函数进行删除 
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*              你删除的数据为：%d！               *__\n",temp1); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
			break;}
			case 5:{
				
				TraverseList(L,&visit);//遍历 
				break;
			}
			case 6:{
				the_end=ReverseList(&L);//反转 
				break;
			}
			case 7:{
				the_end=IsLoopList(L);//判断是否成环 
				break;
			}
			case 8:{
				L=ReverseEvenList(&L);//反转偶数 
				break;
			}
			case 9:{
				LNode *mid;
				mid=FindMidNode(&L);//判断中点 
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*               中间结点的数值为：%d                *__\n",mid->data); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
				break;
			}
			case 10:{
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*             请输入你想要寻找的结点的数据！           *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");	
				ElemType temp3;
				scanf(" %d",&temp3);
				the_end=SearchList(L,temp3);//查找 
				break;
			}
			case 114514:{
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*             恭喜你通过乱输发现小彩蛋！！！           *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
			}
		}
		if(the_end==SUCCESS){
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*                   执行成功/正确！                    *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
		}else if(the_end==ERROR){
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*                   执行失败/错误！                    *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
		}
		system("pause");
		system("cls");
	}
	
}
>>>>>>> f4c6eaede1e2c53d2d05de8af4fee3fa02ec3d28
