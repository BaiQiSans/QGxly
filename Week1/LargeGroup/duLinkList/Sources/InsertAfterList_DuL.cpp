#include <stdio.h>
#include <stdlib.h>
#include "..\Headers\duLinkedList.h"

Status InsertAfterList_DuL(DuLNode *p, DuLNode *q){
	if(p==NULL||q==NULL){
	printf("                                  ____________________________________________________________\n");
	printf("                                  __*            ******************************            *__\n");
	printf("                                  __*                   您好，清线初始化哦                 *__\n"); 
	printf("                                  __*            ******************************            *__\n");
	printf("                                  ____________________________________________________________\n");
	return ERROR;}
	q->prior=p;
	q->next=p->next;//与另一个插入函数基本一样 	
	p->next=q;
	return SUCCESS; 
}
