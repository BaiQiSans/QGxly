#include <stdio.h>
#include <stdlib.h>
#include "..\Headers\duLinkedList.h"

Status InitList_DuL(DuLinkedList *L){
	if((*L)!=NULL){	
	printf("                                  ____________________________________________________________\n");
	printf("                                  __*            ******************************            *__\n");
	printf("                                  __*                   ���Ѿ���ʼ������Ŷ                 *__\n"); 
	printf("                                  __*            ******************************            *__\n");
	printf("                                  ____________________________________________________________\n");
	return OVERFLOW;}
	*L = (DuLinkedList)malloc(sizeof(DuLNode));//���ٿռ� 
	(*L)->prior=(*L)->next=NULL;//��ʼ��ָ�� 
	return SUCCESS;
}
