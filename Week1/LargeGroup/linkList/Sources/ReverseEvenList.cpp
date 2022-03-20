<<<<<<< HEAD
#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

/**
 *  @name        : LNode* ReverseEvenList(LinkedList *L)
 *	@description : reverse the nodes which value is an even number in the linked list, input: 1 -> 2 -> 3 -> 4  output: 2 -> 1 -> 4 -> 3
 *	@param		 : L(the head node)
 *	@return		 : LNode(the new head node)
 *  @notice      : choose to finish
 */
 
 LNode* ReverseEvenList(LinkedList *L){
	
	LinkedList l = (* L);
    if(l == NULL || l->next == NULL)return l;
    LNode *L3,*L2,*L1;
    L1 = l;
    L2 = L1->next;
    L3 = L2->next;
    while(L3 != NULL){
        if(!(L3->data % 2)){
            L2->next = L3->next;         
            L3->next = L2;
            L1->next=L3;//让L1存储L3的地址，方便L2和L3进行交换 
            L1=L3;
			L3=L2->next;
        }
     	else{
     		L1=L1->next;
 		L2=L2->next;
 		L3=L3->next;
		 }
    }
    return l;
 }
=======
#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

/**
 *  @name        : LNode* ReverseEvenList(LinkedList *L)
 *	@description : reverse the nodes which value is an even number in the linked list, input: 1 -> 2 -> 3 -> 4  output: 2 -> 1 -> 4 -> 3
 *	@param		 : L(the head node)
 *	@return		 : LNode(the new head node)
 *  @notice      : choose to finish
 */
 
 LNode* ReverseEvenList(LinkedList *L){
	
	LinkedList l = (* L);
    if(l == NULL || l->next == NULL)return l;
    LNode *L3,*L2,*L1;
    L1 = l;
    L2 = L1->next;
    L3 = L2->next;
    while(L3 != NULL){
        if(!(L3->data % 2)){
            L2->next = L3->next;         
            L3->next = L2;
            L1->next=L3;//让L1存储L3的地址，方便L2和L3进行交换 
            L1=L3;
			L3=L2->next;
        }
     	else{
     		L1=L1->next;
 		L2=L2->next;
 		L3=L3->next;
		 }
    }
    return l;
 }
>>>>>>> f4c6eaede1e2c53d2d05de8af4fee3fa02ec3d28
