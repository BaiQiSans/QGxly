#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "binary_sort_tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define SUCCESS 1

typedef  struct StackNode
{
	NodePtr root;
	struct StackNode *next;
}StackNode, *LinkStackPtr;

typedef  struct  LinkStack
{
	LinkStackPtr top;
	int	count;
}LinkStack;



//��ջ
int initLStack(LinkStack *s);//��ʼ��ջ
int isEmptyLStack(LinkStack *s);//�ж�ջ�Ƿ�Ϊ��
int getTopLStack(LinkStack *s);//�õ�ջ��Ԫ��
int pushLStack(LinkStack *s,NodePtr n);//��ջ
Node* popLStack(LinkStack *s);//��ջ


#endif 

