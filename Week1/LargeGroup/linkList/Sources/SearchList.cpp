<<<<<<< HEAD
#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

Status SearchList(LinkedList L, ElemType e) {
//	if(L->next == NULL) return ERROR;//若传入指针为空，返回错误 
//	LNode *temp = L->next;//令 temp指向L的next 
//	while(temp->data != e&&temp != NULL){//若temp的data不为e，并且temp还不为空 
//		temp = temp->next;//后移 
//	}
//	return SUCCESS;

	if (L == NULL || L->next == NULL) return ERROR;//若传入指针为空，返回错误 
    LinkedList nextNode = L;
    while (nextNode)
    {
        if (nextNode->data == e) return SUCCESS;
        nextNode = nextNode->next;
    }
    return ERROR;
}
=======
#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

Status SearchList(LinkedList L, ElemType e) {
//	if(L->next == NULL) return ERROR;//若传入指针为空，返回错误 
//	LNode *temp = L->next;//令 temp指向L的next 
//	while(temp->data != e&&temp != NULL){//若temp的data不为e，并且temp还不为空 
//		temp = temp->next;//后移 
//	}
//	return SUCCESS;

	if (L == NULL || L->next == NULL) return ERROR;//若传入指针为空，返回错误 
    LinkedList nextNode = L;
    while (nextNode)
    {
        if (nextNode->data == e) return SUCCESS;
        nextNode = nextNode->next;
    }
    return ERROR;
}
>>>>>>> f4c6eaede1e2c53d2d05de8af4fee3fa02ec3d28
