#include "..\Headers\linkedList.h"
#include <stdio.h>

//typedef struct LNode {
//	ElemType data;
//  	struct LNode *next;
//} LNode, *LinkedList;

Status IsLoopList(LinkedList L){
	if(L == NULL||L->next == NULL)return ERROR;//无链表时返回错误 
	LNode * fast,*slow;
	fast = slow = L;//初始化两个指针 
	fast = fast->next->next;//后移fast两位 
	slow = slow->next;//后移slow一位 
	while(1){
		if(fast->next==NULL||slow->next==NULL)return ERROR;//若为空 退出 
		if(fast == slow)return SUCCESS;//若相等返回成功 
		else{
			fast = fast->next->next;//不相等时fast后移两位 
			slow = slow->next;	//slow后移一位 
		}
	}
}
