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
		printf("                                  __*                  �ǲ������ǳ�ʼ���ˣ�                *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	return ERROR;}//�޷�ִ�в������ 
	q->next=p->next;//��q��nextΪp��next ����ʧ��һ����� 
	p->next=q;//��pָ��q 
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
		printf("                                  __*                  �ǲ������ǳ�ʼ���ˣ�                *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
	return ERROR;}//�޷�ִ�в������ 
	q->next=p->next;//��q��nextΪp��next ����ʧ��һ����� 
	p->next=q;//��pָ��q 
	return SUCCESS;
}
>>>>>>> f4c6eaede1e2c53d2d05de8af4fee3fa02ec3d28
