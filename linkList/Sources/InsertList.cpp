<<<<<<< HEAD
#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

/**
 *  @name        : Status InsertList(LNode *p, LNode *q)
 *	@description : insert node q after node p
 *	@param		 : p, q
 *	@return		 : Status
 *  @notice      : None
 */

Status InsertList(LNode *p, LNode *q){
	if(p == NULL || q == NULL){
		printf("                                  ____________________________________________________________\n");
		printf("                                  __*            ******************************            *__\n");
		printf("                                  __*                  是不是忘记初始化了！                *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	return ERROR;}//无法执行插入操作 
	q->next=p->next;//让q的next为p的next 不丢失下一个结点 
	p->next=q;//令p指向q 
	return SUCCESS;
}
=======
#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

/**
 *  @name        : Status InsertList(LNode *p, LNode *q)
 *	@description : insert node q after node p
 *	@param		 : p, q
 *	@return		 : Status
 *  @notice      : None
 */

Status InsertList(LNode *p, LNode *q){
	if(p == NULL || q == NULL){
		printf("                                  ____________________________________________________________\n");
		printf("                                  __*            ******************************            *__\n");
		printf("                                  __*                  是不是忘记初始化了！                *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	return ERROR;}//无法执行插入操作 
	q->next=p->next;//让q的next为p的next 不丢失下一个结点 
	p->next=q;//令p指向q 
	return SUCCESS;
}
>>>>>>> f4c6eaede1e2c53d2d05de8af4fee3fa02ec3d28
