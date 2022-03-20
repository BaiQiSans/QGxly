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
		printf("                                  __*              初始化再好，也不能两次！                *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	return OVERFLOW;}//若链表不为空，则返回失败（-1）
	*L = (LinkedList)malloc(sizeof(LNode));//若链表不为空，则开辟空间  
	(*L)->next = NULL;
	return SUCCESS;//这样链表的初始化就算是完成啦 
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
		printf("                                  __*              初始化再好，也不能两次！                *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	return OVERFLOW;}//若链表不为空，则返回失败（-1）
	*L = (LinkedList)malloc(sizeof(LNode));//若链表不为空，则开辟空间  
	(*L)->next = NULL;
	return SUCCESS;//这样链表的初始化就算是完成啦 
}
>>>>>>> f4c6eaede1e2c53d2d05de8af4fee3fa02ec3d28
