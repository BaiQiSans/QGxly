<<<<<<< HEAD
#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

Status SearchList(LinkedList L, ElemType e) {
//	if(L->next == NULL) return ERROR;//������ָ��Ϊ�գ����ش��� 
//	LNode *temp = L->next;//�� tempָ��L��next 
//	while(temp->data != e&&temp != NULL){//��temp��data��Ϊe������temp����Ϊ�� 
//		temp = temp->next;//���� 
//	}
//	return SUCCESS;

	if (L == NULL || L->next == NULL) return ERROR;//������ָ��Ϊ�գ����ش��� 
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
//	if(L->next == NULL) return ERROR;//������ָ��Ϊ�գ����ش��� 
//	LNode *temp = L->next;//�� tempָ��L��next 
//	while(temp->data != e&&temp != NULL){//��temp��data��Ϊe������temp����Ϊ�� 
//		temp = temp->next;//���� 
//	}
//	return SUCCESS;

	if (L == NULL || L->next == NULL) return ERROR;//������ָ��Ϊ�գ����ش��� 
    LinkedList nextNode = L;
    while (nextNode)
    {
        if (nextNode->data == e) return SUCCESS;
        nextNode = nextNode->next;
    }
    return ERROR;
}
>>>>>>> f4c6eaede1e2c53d2d05de8af4fee3fa02ec3d28
