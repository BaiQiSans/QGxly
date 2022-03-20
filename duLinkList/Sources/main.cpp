#include <stdio.h>
#include <stdlib.h>
#include "..\Headers\duLinkedList.h"

void visit(ElemType e){
	printf(" %.5d\n",e);
}

int main(){
		int n=0;
		DuLinkedList head=NULL;
	printf("                                  ____________________________________________________________\n");
	printf("                                  __*            ******************************            *__\n");
	printf("                                  __*                欢迎进入ADT双向链表使用               *__\n"); 
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
		printf("                                  __           03  插入结点前方        04  插入结点后方         __\n");
		printf("                                  __           05  遍历所有结点        06  删除链表结点         __\n");
		printf("                                  __                            00 退出                         __\n");
		printf("                                  __*                      ******************                  *__\n");
		printf("                                  ________________________________________________________________\n");
		scanf(" %d",&order);
		system("cls");
		switch(order){
			case 1:the_end=InitList_DuL(&head);
			break;
			case 2:DestroyList_DuL(&head);
			break;
			case 3:	{
				if(n==0){
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*               第一次插入只能向后插入哦！             *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");	
				break;}
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*              请输入你想要添加结点的数据！            *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");	
			DuLNode *q = (DuLNode*)malloc(sizeof(DuLNode));
			q->next=q->prior=NULL;
			DuLNode *p=head;
			while(p->next!=NULL)p=p->next;
			scanf(" %d",&q->data);	
			system("cls");
			the_end=InsertBeforeList_DuL(p,q);
			break;}
			case 4:{
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*              请输入你想要添加结点的数据！            *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");	
				DuLNode *q = (DuLNode*)malloc(sizeof(DuLNode));
				q->next=q->prior=NULL;
				DuLNode *p=head;
				while(p->next!=NULL)p=p->next;
				scanf(" %d",q->data);	
				system("cls");
				the_end=InsertAfterList_DuL(p,q);
				if(the_end==SUCCESS)n++;
			break;}
			case 5:{
				TraverseList_DuL(head,&visit);
				break;
			}
			case 6:{
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*              请输入你想要删除结点的位置！            *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");	
				ElemType temp1;
				int delet;
				scanf(" %d",&delet);
				DuLinkedList p=head;
				for(int i=1;i<delet;p=p->next,i++){
				if(p==NULL){
					printf("                                  ____________________________________________________________\n");
					printf("                                  __*            ******************************            *__\n");
					printf("                                  __*                   输入的索引错误了哦！               *__\n"); 
					printf("                                  __*            ******************************            *__\n");
					printf("                                  ____________________________________________________________\n");
					break;	
				}
				}
				the_end=DeleteList_DuL(p,&temp1);
				printf("被删除的数据是:%d",temp1);
				break;
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
