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
	printf("                                  __*                ��ӭ����ADT˫������ʹ��               *__\n"); 
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
		printf("                                  __                   ������Ӧ�����������ѡ��                 __\n"); 
		printf("                                  __                                                            __\n");
		printf("                                  __           01  ��ʼ������          02  �������н��         __\n"); 
		printf("                                  __           03  ������ǰ��        04  �������         __\n");
		printf("                                  __           05  �������н��        06  ɾ���������         __\n");
		printf("                                  __                            00 �˳�                         __\n");
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
				printf("                                  __*               ��һ�β���ֻ��������Ŷ��             *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");	
				break;}
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*              ����������Ҫ���ӽ������ݣ�            *__\n"); 
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
				printf("                                  __*              ����������Ҫ���ӽ������ݣ�            *__\n"); 
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
				printf("                                  __*              ����������Ҫɾ������λ�ã�            *__\n"); 
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
					printf("                                  __*                   ���������������Ŷ��               *__\n"); 
					printf("                                  __*            ******************************            *__\n");
					printf("                                  ____________________________________________________________\n");
					break;	
				}
				}
				the_end=DeleteList_DuL(p,&temp1);
				printf("��ɾ����������:%d",temp1);
				break;
			}
		}
		if(the_end==SUCCESS){
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*                   ִ�гɹ�/��ȷ��                    *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
		}else if(the_end==ERROR){
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*                   ִ��ʧ��/����                    *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
		}
		system("pause");
		system("cls");
	}
}