#include <stdio.h>
#include <stdlib.h>
#include "..\Headers\duLinkedList.h"

Status InsertBeforeList_DuL(DuLNode *p, DuLNode *q){
	if(p==NULL||q==NULL){
	printf("                                  ____________________________________________________________\n");
	printf("                                  __*            ******************************            *__\n");
	printf("                                  __*                   ���ã����߳�ʼ��Ŷ                 *__\n"); 
	printf("                                  __*            ******************************            *__\n");
	printf("                                  ____________________________________________________________\n");
	return ERROR;}
	q->next=p;//�²���Ľ��nextָ��ԭ��� 
	q->prior=p->prior;//�²��������һ��ָ��Դ�ڵ����һ�� 
	p->prior=q;//ԭ������һ��ָ���²���
	return SUCCESS; 
}
