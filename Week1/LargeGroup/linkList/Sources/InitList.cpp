<<<<<<< HEAD
#include "..\Headers\linkedList.h"
#include <stdio.h>
#include <stdlib.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

Status InitList(LinkedList *L){
	if((*L)!=NULL){
		printf("                                  ____________________________________________________________\n");
		printf("                                  __*            ******************************            *__\n");
		printf("                                  __*              ��ʼ���ٺã�Ҳ�������Σ�                *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	return OVERFLOW;}//������Ϊ�գ��򷵻�ʧ�ܣ�-1��
	*L = (LinkedList)malloc(sizeof(LNode));//������Ϊ�գ��򿪱ٿռ�  
	(*L)->next = NULL;
	return SUCCESS;//��������ĳ�ʼ������������� 
}
=======
#include "..\Headers\linkedList.h"
#include <stdio.h>
#include <stdlib.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

Status InitList(LinkedList *L){
	if((*L)!=NULL){
		printf("                                  ____________________________________________________________\n");
		printf("                                  __*            ******************************            *__\n");
		printf("                                  __*              ��ʼ���ٺã�Ҳ�������Σ�                *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	return OVERFLOW;}//������Ϊ�գ��򷵻�ʧ�ܣ�-1��
	*L = (LinkedList)malloc(sizeof(LNode));//������Ϊ�գ��򿪱ٿռ�  
	(*L)->next = NULL;
	return SUCCESS;//��������ĳ�ʼ������������� 
}
>>>>>>> f4c6eaede1e2c53d2d05de8af4fee3fa02ec3d28
