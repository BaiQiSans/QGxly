#include <stdio.h>
#include <stdlib.h>
#include "..\Headers\duLinkedList.h"

Status InsertAfterList_DuL(DuLNode *p, DuLNode *q){
	if(p==NULL||q==NULL){
	printf("                                  ____________________________________________________________\n");
	printf("                                  __*            ******************************            *__\n");
	printf("                                  __*                   ���ã����߳�ʼ��Ŷ                 *__\n"); 
	printf("                                  __*            ******************************            *__\n");
	printf("                                  ____________________________________________________________\n");
	return ERROR;}
	q->prior=p;
	q->next=p->next;//����һ�����뺯������һ�� 	
	p->next=q;
	return SUCCESS; 
}
