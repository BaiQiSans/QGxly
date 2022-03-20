#include <stdio.h>
#include <stdlib.h>
#include "..\Headers\duLinkedList.h"

Status InitList_DuL(DuLinkedList *L){
	if((*L)!=NULL){	
	printf("                                  ____________________________________________________________\n");
	printf("                                  __*            ******************************            *__\n");
	printf("                                  __*                   你已经初始化过了哦                 *__\n"); 
	printf("                                  __*            ******************************            *__\n");
	printf("                                  ____________________________________________________________\n");
	return OVERFLOW;}
	*L = (DuLinkedList)malloc(sizeof(DuLNode));//开辟空间 
	(*L)->prior=(*L)->next=NULL;//初始化指针 
	return SUCCESS;
}
