<<<<<<< HEAD
#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

Status ReverseList(LinkedList *L){
	if((*L) == NULL){
		printf("                                  ____________________________________________________________\n");
		printf("                                  __*            ******************************            *__\n");
		printf("                                  __*           ����㿴���ң����������ǳ�ʼ���ˣ�         *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	return ERROR;}//������Ϊ�գ������ 
	LNode *p,*q,*r;
	p = (*L)->next;//��pָ��ͷָ���next 
	(*L)->next = NULL;//��ͷָ���nextָ���
	q = r = NULL;//��ʼ�� 
	while(p){
		q = p->next;//qָ��p��next 
		p->next = r;//p��nextָ��r 
		r = p;//r����p���൱��p��nextָ���Լ���ǰ��� �� 
		p = q;//p����һλ 
	}
	(*L)->next = r;//Lָ��ǰ�����һ���������ݵĽ�� 
	return SUCCESS;
	
	
//	if ((* L) == NULL) return ERROR;
//    ListNode *a = NULL,*b = NULL,*c = (* list);
//    while(c != NULL)
//    {
//        b = c->next;
//        c->next = a;
//        a = c;
//        c = b;
//        (* L) = a;
//    }
//    return SUCCESS;
}
=======
#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

Status ReverseList(LinkedList *L){
	if((*L) == NULL){
		printf("                                  ____________________________________________________________\n");
		printf("                                  __*            ******************************            *__\n");
		printf("                                  __*           ����㿴���ң����������ǳ�ʼ���ˣ�         *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	return ERROR;}//������Ϊ�գ������ 
	LNode *p,*q,*r;
	p = (*L)->next;//��pָ��ͷָ���next 
	(*L)->next = NULL;//��ͷָ���nextָ���
	q = r = NULL;//��ʼ�� 
	while(p){
		q = p->next;//qָ��p��next 
		p->next = r;//p��nextָ��r 
		r = p;//r����p���൱��p��nextָ���Լ���ǰ��� �� 
		p = q;//p����һλ 
	}
	(*L)->next = r;//Lָ��ǰ�����һ���������ݵĽ�� 
	return SUCCESS;
	
	
//	if ((* L) == NULL) return ERROR;
//    ListNode *a = NULL,*b = NULL,*c = (* list);
//    while(c != NULL)
//    {
//        b = c->next;
//        c->next = a;
//        a = c;
//        c = b;
//        (* L) = a;
//    }
//    return SUCCESS;
}
>>>>>>> f4c6eaede1e2c53d2d05de8af4fee3fa02ec3d28
