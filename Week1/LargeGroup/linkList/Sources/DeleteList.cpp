<<<<<<< HEAD
#include "..\Headers\linkedList.h"
#include <stdio.h>
#include <stdlib.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;
/**
 *  @name        : Status DeleteList(LNode *p, ElemType *e)
 *	@description : delete the first node after the node p and assign its value to e
 *	@param		 : p, e
 *	@return		 : Status
 *  @notice      : None
 */
Status DeleteList(LNode *p, ElemType *e){
	if(p->next == NULL || e == NULL){
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*                    请输入初始化链表！                *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
	return ERROR;} 
    LNode *temp = p -> next;//令temp指向p的next 
	*e = temp -> data;//令e记录temp的数据 
	p -> next =temp -> next;//令p的next指向temp的next 
	free(temp);
	return SUCCESS;
}
=======
#include "..\Headers\linkedList.h"
#include <stdio.h>
#include <stdlib.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;
/**
 *  @name        : Status DeleteList(LNode *p, ElemType *e)
 *	@description : delete the first node after the node p and assign its value to e
 *	@param		 : p, e
 *	@return		 : Status
 *  @notice      : None
 */
Status DeleteList(LNode *p, ElemType *e){
	if(p->next == NULL || e == NULL){
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*                    请输入初始化链表！                *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
	return ERROR;} 
    LNode *temp = p -> next;//令temp指向p的next 
	*e = temp -> data;//令e记录temp的数据 
	p -> next =temp -> next;//令p的next指向temp的next 
	free(temp);
	return SUCCESS;
}
>>>>>>> f4c6eaede1e2c53d2d05de8af4fee3fa02ec3d28
