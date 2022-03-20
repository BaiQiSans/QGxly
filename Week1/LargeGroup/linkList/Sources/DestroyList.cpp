<<<<<<< HEAD
#include "..\Headers\linkedList.h"
#include <stdio.h>
#include <stdlib.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

void DestroyList(LinkedList *L){
	if(*L==NULL){
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*                    请输入初始化链表！                *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
	return;}
	LNode* nextPtr = *L;
    LNode* crtPtr = NULL;
    do
    {
        crtPtr = nextPtr;
        nextPtr = crtPtr->next;
        free(crtPtr);
        crtPtr = NULL;
    } while (nextPtr);
    (* L) = NULL;
}
=======
#include "..\Headers\linkedList.h"
#include <stdio.h>
#include <stdlib.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

void DestroyList(LinkedList *L){
	if(*L==NULL){
				printf("                                  ____________________________________________________________\n");
				printf("                                  __*            ******************************            *__\n");
				printf("                                  __*                    请输入初始化链表！                *__\n"); 
				printf("                                  __*            ******************************            *__\n");
				printf("                                  ____________________________________________________________\n");
	return;}
	LNode* nextPtr = *L;
    LNode* crtPtr = NULL;
    do
    {
        crtPtr = nextPtr;
        nextPtr = crtPtr->next;
        free(crtPtr);
        crtPtr = NULL;
    } while (nextPtr);
    (* L) = NULL;
}
>>>>>>> f4c6eaede1e2c53d2d05de8af4fee3fa02ec3d28
