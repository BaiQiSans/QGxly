#include <stdio.h>
#include <stdlib.h>
#include "..\Headers\duLinkedList.h"

void TraverseList_DuL(DuLinkedList L,void (*visit)(ElemType e)){
	if(L==NULL){
	printf("                                  ____________________________________________________________\n");
	printf("                                  __*            ******************************            *__\n");
	printf("                                  __*                   ����ȥ��ʼ������Ŷ                 *__\n"); 
	printf("                                  __*            ******************************            *__\n");
	printf("                                  ____________________________________________________________\n");
	return;}
	DuLNode* tmphead=L->next;
	while(tmphead){
		visit(tmphead->data);
		tmphead=tmphead->next;//��Ϊ������Ʋ���� 		
	}
	return;
}


