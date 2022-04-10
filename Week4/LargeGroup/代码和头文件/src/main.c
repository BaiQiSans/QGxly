#include "../inc/binary_sort_tree.h"
#include "binary_sort_tree.c"
#include <windows.h>

BinarySortTree a;

void show();
int main()
{
	int choice=0;
	 ElemType value = 0;
    do
    {
        show();
        scanf("%d",&choice);
        system("cls");
        switch (choice)
        {
            case 1:
            {
                if(BST_init(&a)){
                    printf("����ʼ���ɹ���\n");
                }
                break;
            }
            case 2:
            {
                printf("������һ��������");
                scanf("%d",&value);
                if (BST_insert(&a,value))
                {
                    printf("����ɹ���\n");
                }else{
                    printf("����ʧ�ܣ�\n");
                }
                break;
            }
            case 3:
            {
               printf("������Ҫɾ��������: ");
               scanf("%d",&value);
               BST_delete(&a,value);
                break;
            }
            case 4:
            {
               printf("������Ҫ���ҵ����֣�");
               scanf("%d",&value);
               if(BST_search(&a,value)==false)
               {
               	printf("What you're looking for doesn't exist\n");
			   }
                break;
            }
            case 5:
            {
                printf("�ݹ�ǰ�����:");
                if (!BST_preorderR(&a,visit))
                {
                    printf("����ʧ��");
                }
                break;
            }
            case 6:
            {
               printf("����ǰ�����:");
               BST_preorderI(&a,visit);
                break;
            }
            case 7:
            {
            	printf("�ݹ��������:");
               BST_inorderR(&a,visit);
                break;
            }
            case 8:
            {
               printf("�����������:");
               BST_inorderI(&a,visit);
                break;
            }
            case 9:
            {
               printf("�ݹ�������:");
               BST_postorderR(&a,visit);
                break;
            }
            case 10:
            {
            	printf("�����������:");
            	BST_postorderI(&a,visit);
               break;
            }
            case 11:
            {
               printf("�������:");
               BST_levelOrder(&a,visit);
                break;
            }
            case 12:
            {
                break;
            }                                                                          
            default:
            {
                printf("��������������!(1-12)\n");
                break;
            }
        }
    } while (choice != 12);
    return 0;

}

void show(){
    printf("\n\n\n���������ADT\n\n");
    printf("1.��ʼ����\n");
    printf("2.��������\n");
    printf("3.ɾ������\n");
    printf("4.��������\n");
    printf("5.�ݹ�ǰ�����\n");
    printf("6.����ǰ�����\n");
    printf("7.�ݹ��������\n");
    printf("8.�����������\n");
    printf("9.�ݹ�������\n");
    printf("10.�����������\n");
    printf("11.�������\n");
    printf("12.�˳�����\n");
    printf("��ֱ���������ֽ��ж�Ӧ����\n");
}

