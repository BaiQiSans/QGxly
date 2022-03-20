#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

Status IsLoopList(LinkedList L){
	if(L == NULL||L->next == NULL)return ERROR;//������ʱ���ش��� 
	LNode * fast,*slow;
	fast = slow = L;//��ʼ������ָ�� 
	fast = fast->next->next;//����fast��λ 
	slow = slow->next;//����slowһλ 
	while(1){
		if(fast->next==NULL||slow->next==NULL)return ERROR;//��Ϊ�� �˳� 
		if(fast == slow)return SUCCESS;//����ȷ��سɹ� 
		else{
			fast = fast->next->next;//�����ʱfast������λ 
			slow = slow->next;	//slow����һλ 
		}
	}
}
