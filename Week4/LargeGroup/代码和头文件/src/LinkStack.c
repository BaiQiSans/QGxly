#include "../inc/LinkStack.h"

int initLStack(LinkStack *s){
    s->top = (StackNode*)malloc(sizeof(StackNode));
    s->count = 0;
    return SUCCESS;
}

int isEmptyLStack(LinkStack *s){
    if (s->count == 0)
    {
        return SUCCESS;
    }
    return ERROR;
}

int getTopLStack(LinkStack *s){
    int e;
    if (s->top == NULL || s == NULL)
    {
        printf("���ȳ�ʼ��ջ��\n");
        return ERROR;
    }    
    if (!isEmptyLStack(s))
    {
        e = s->top->root->value;
        return e;
    }else{
        printf("ջΪ�գ�\n");
    }
    return ERROR;
}

int pushLStack(LinkStack *s,NodePtr n){
    if (s->top == NULL || s == NULL)
    {
        printf("���ȳ�ʼ��ջ��\n");
        return ERROR;
    }
    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
    newNode->root = n;
    newNode->next = s->top;
    s->top = newNode;
    s->count++;
    return SUCCESS;
}
Node* popLStack(LinkStack *s){
    if (s->top == NULL || s == NULL)
    {
        printf("���ȳ�ʼ��ջ��\n");
        return NULL;
    }
    if (!isEmptyLStack(s))
    {
        LinkStackPtr p = s->top;
        NodePtr n = s->top->root;
        s->top = s->top->next;
        free(p);
        s->count--;
        return n;
    }
    printf("ջ�ѿ�\n");
    return NULL;
}
