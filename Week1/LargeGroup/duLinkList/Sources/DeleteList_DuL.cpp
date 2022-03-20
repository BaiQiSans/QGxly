#include <stdio.h>
#include <stdlib.h>
#include "..\Headers\duLinkedList.h"

Status DeleteList_DuL(DuLNode *p, ElemType *e){
	if(p==NULL)return ERROR;
	DuLNode* nextP = p->next;
	nextP->prior->next=nextP->next;
	nextP->next->prior=nextP->prior;
	(*e)=nextP->data;
	return SUCCESS;
}
