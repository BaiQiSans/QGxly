<<<<<<< HEAD
#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

/**
 *  @name        : void TraverseList(LinkedList L, void (*visit)(ElemType e))
 *	@description : traverse the linked list and call the funtion visit
 *	@param		 : L(the head node), visit
 *	@return		 : None
 *  @notice      : None
 */

void TraverseList(LinkedList L, void (*visit)(ElemType e)){
	if (L == NULL || visit == NULL) {
		printf("                                  ____________________________________________________________\n");
		printf("                                  __*            ******************************            *__\n");
		printf("                                  __*              ����Ҳ�����ǳ�ʼ����һ���أ�            *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");return;
	}
	LinkedList p = L;//��pָ��L��next 
	p = p->next;
	while(p){
		visit(p->data);//���ú���������� 
		p = p->next;//����һλ 
	}
}
=======
#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

/**
 *  @name        : void TraverseList(LinkedList L, void (*visit)(ElemType e))
 *	@description : traverse the linked list and call the funtion visit
 *	@param		 : L(the head node), visit
 *	@return		 : None
 *  @notice      : None
 */

void TraverseList(LinkedList L, void (*visit)(ElemType e)){
	if (L == NULL || visit == NULL) {
		printf("                                  ____________________________________________________________\n");
		printf("                                  __*            ******************************            *__\n");
		printf("                                  __*              ����Ҳ�����ǳ�ʼ����һ���أ�            *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");return;
	}
	LinkedList p = L;//��pָ��L��next 
	p = p->next;
	while(p){
		visit(p->data);//���ú���������� 
		p = p->next;//����һλ 
	}
	
//	if (list == NULL || visit == NULL) return;
//    LinkedList nextNode = list;
//    while (nextNode)
//    {
//        visit(nextNode->data);
//        nextNode = nextNode->next;
//    }
}
>>>>>>> f4c6eaede1e2c53d2d05de8af4fee3fa02ec3d28
