<<<<<<< HEAD
#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

/**
 *  @name        : LNode* FindMidNode(LinkedList *L)
 *	@description : find the middle node in the linked list
 *	@param		 : L(the head node)
 *	@return		 : LNode
 *  @notice      : choose to finish
 */
LNode* FindMidNode(LinkedList *L){
	if(*L==NULL || (*L)->next==NULL) {
		printf("                                  ____________________________________________________________\n");
		printf("                                  __*            ******************************            *__\n");
		printf("                                  __*                    请输入初始化链表！                *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	return *L;}
	LNode *mid,*fast;
	mid = fast =*L;
	while(fast!=NULL){
		if(fast->next==NULL)fast = fast->next;
		else fast = fast->next->next;
		mid=mid->next;
	}
	return mid;
}
=======
#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

/**
 *  @name        : LNode* FindMidNode(LinkedList *L)
 *	@description : find the middle node in the linked list
 *	@param		 : L(the head node)
 *	@return		 : LNode
 *  @notice      : choose to finish
 */
LNode* FindMidNode(LinkedList *L){
	if(*L==NULL || (*L)->next==NULL) {
		printf("                                  ____________________________________________________________\n");
		printf("                                  __*            ******************************            *__\n");
		printf("                                  __*                    请输入初始化链表！                *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	return *L;}
	LNode *mid,*fast;
	mid = fast =*L;
	while(fast!=NULL){
		if(fast->next==NULL)fast = fast->next;
		else fast = fast->next->next;
		mid=mid->next;
	}
	return mid;
}
>>>>>>> f4c6eaede1e2c53d2d05de8af4fee3fa02ec3d28
