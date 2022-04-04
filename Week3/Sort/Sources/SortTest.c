#include "../Headers/sort.h"
#include "sort.c"
#include<stdio.h>
#include <windows.h>
#include <time.h>
void temp();
void readdata(int num,int *a,FILE *fp);
void testtime(int choice);
int main()
{
	int choice=0;
     do{
        temp();
        printf("\n\n");
        testtime(InputCheck());
    } while (InputCheck()!= 5);
	return 0;
 } 
 
 void temp()
 {
 	printf("                                  _________________________________________________________________\n");
	printf("                                  __*                      ******************                   *__\n");
	printf("                                  __                   ������Ӧ�����������ѡ��                  __\n");
	printf("                                  __            ע������Ϊ0~1000������������鶨��Ϊ100          __\n"); 
	printf("                                  __                                                             __\n");
	printf("                                  __       01  100 * 100k���ݲ���      02  �Զ������ݲ���        __\n"); 
	printf("                                  __       03  ��ɫ����չʾ            04  Ѱ�ҵڼ�С������      __\n");
	printf("                                  __                            05 �˳�                          __\n");
	printf("                                  __*                       ******************                  *__\n");
	printf("                                  _________________________________________________________________\n"); 
 }
 
void readdata(int num,int *a,FILE *fp)
{
    fp = fopen("testdata.txt","r");
    if (fp == NULL)
    {
        printf("file is not exsits!\n");
    }
    int j;
    for (j = 0; j < num; j++)
    {   
        if(fscanf(fp,"%d ",&a[j])==EOF)break;
    }
    fclose(fp);
}

void testtime(int choice)
{
	int num=100;
	int a[100],count;
	count=100000;
	switch(choice){
	case 1:{
		printf("100 * 100k�����򻨷�ʱ�䣺\n");
		break;
	}
	case 2:{
        printf("��������Ҫ���ԵĴ�����");
        count=InputCheck();
        printf("�Զ������ݲ��Ի���ʱ�䣺\n");
		break;        
    }
    case 3:{
    	int color[8]={1,2,0,0,2,1,2,0};
    	int i;
    	for(i=0;i<8;i++)
    	{
    		printf("%d ",color[i]);
		}
		ColorSort(color,8);
		printf("������\n");
		for(i=0;i<8;i++)
    	{
    		printf("%d ",color[i]);
		}
		exit(0);
	}
	case 4:{
		int color[8]={2,5,6,2,8,2,3,1};
		int i;
		for(i=0;i<8;i++)
    	{
    		printf("%d ",color[i]);
		}
		printf("������ڼ�С��\n ");
		int k;
		scanf("%d",&k);
		int brr=FindKthMin(color,0,7, k);
		printf("��%dС���ǣ�%d",k,brr);
		exit(0);
	}
	case 5:{
        break;
    }
    default:{
    	printf("                                  ____________________________________________________________\n");
		printf("                                  __*            ******************************            *__\n");
		printf("                                  __*                       �������                     *__\n"); 
		printf("                                  __*            ******************************            *__\n");
		printf("                                  ____________________________________________________________\n");
		break;
	}
	}
    FILE *fp;
    int time = 0;
    int i=0;
    int start = clock();
    for (i = 0; i < count; i++)
    {
		readdata(num,a,fp);
        insertSort(a,num);
    }
    int end = clock();
    time += end - start;
    printf("����������ʱ��%dms\n",time);
    time = 0;
    start = clock();
    for (i = 0; i < count; i++)
    {   
		readdata(num,a,fp); 
        MergeSort(a,0,num-1,a);        
    }
    end = clock();
    time += end - start;
    printf("�鲢������ʱ��%dms\n",time);
 	time = 0;
 	start = clock();
    for ( i = 0; i < count; i++)
    {  
		readdata(num,a,fp);   
        QuickSort_Recursion(a,0,num-1);
    }
    end = clock();
    time += end - start;
    printf("��������(�ݹ��)��ʱ��%dms\n",time);
    time = 0;
    start = clock();
    for (i = 0; i < count; i++)
    {
    	readdata(num,a,fp);
        CountSort(a,num,GetMax(a,100));
    }
    end = clock();
    time += end - start;
    printf("����������ʱ��%dms\n",time);
    time = 0;
    start = clock();
    for (i = 0; i < count; i++)
    {
    	readdata(num,a,fp);
        RadixCountSort(a,num);
    }
    end = clock();
    time += end - start;
    printf("��������������ʱ��%dms\n\n\n",time);
    printf("                                  ____________________________________________________________\n");
	printf("                                  __*            ******************************            *__\n");
	printf("                                  __*                   ִ����ɣ��ݰ�����                 *__\n"); 
	printf("                                  __*            ******************************            *__\n");
	printf("                                  ____________________________________________________________\n");
	system("pause");
	exit(0);    
}
