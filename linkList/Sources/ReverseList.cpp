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
		printf("                                  __*           如果你看到我，代表你忘记初始化了！         *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	return ERROR;}//若链表为空，则错误 
	LNode *p,*q,*r;
	p = (*L)->next;//令p指向头指针的next 
	(*L)->next = NULL;//将头指针的next指向空
	q = r = NULL;//初始化 
	while(p){
		q = p->next;//q指向p的next 
		p->next = r;//p的next指向r 
		r = p;//r等于p（相当于p的next指向自己当前结点 ） 
		p = q;//p后移一位 
	}
	(*L)->next = r;//L指向当前链表第一个存在数据的结点 
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
		printf("                                  __*           如果你看到我，代表你忘记初始化了！         *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	return ERROR;}//若链表为空，则错误 
	LNode *p,*q,*r;
	p = (*L)->next;//令p指向头指针的next 
	(*L)->next = NULL;//将头指针的next指向空
	q = r = NULL;//初始化 
	while(p){
		q = p->next;//q指向p的next 
		p->next = r;//p的next指向r 
		r = p;//r等于p（相当于p的next指向自己当前结点 ） 
		p = q;//p后移一位 
	}
	(*L)->next = r;//L指向当前链表第一个存在数据的结点 
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
