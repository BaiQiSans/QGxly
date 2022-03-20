#include <stdio.h>
#include <stdlib.h>
#include "..\Headers\duLinkedList.h"

Status InsertBeforeList_DuL(DuLNode *p, DuLNode *q){
	if(p==NULL||q==NULL){
	printf("                                  ____________________________________________________________\n");
	printf("                                  __*            ******************************            *__\n");
	printf("                                  __*                   您好，清线初始化哦                 *__\n"); 
	printf("                                  __*            ******************************            *__\n");
	printf("                                  ____________________________________________________________\n");
	return ERROR;}
	q->next=p;//新插入的结点next指向原结点 
	q->prior=p->prior;//新插入结点的上一个指向源节点的上一个 
	p->prior=q;//原结点的上一个指向新插入
	return SUCCESS; 
}
