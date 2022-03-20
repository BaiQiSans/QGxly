#include <stdio.h>
#include <stdlib.h>
#include "..\Headers\duLinkedList.h"



void DestroyList_DuL(DuLinkedList *L){
	if((*L)==NULL)return;
	DuLNode* nextPtr = *L;
    DuLNode* crtPtr = NULL;
    do
    {
        crtPtr = nextPtr;
        nextPtr = crtPtr->next;
        free(crtPtr);
        crtPtr = NULL;
    } while (nextPtr);
    (* L) = NULL;
}

