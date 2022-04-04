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
	printf("                                  __                   输入相应编码进入您的选择                  __\n");
	printf("                                  __            注：数字为0~1000的随机数，数组定长为100          __\n"); 
	printf("                                  __                                                             __\n");
	printf("                                  __       01  100 * 100k数据测试      02  自定义数据测试        __\n"); 
	printf("                                  __       03  颜色排序展示            04  寻找第几小的数字      __\n");
	printf("                                  __                            05 退出                          __\n");
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
		printf("100 * 100k次排序花费时间：\n");
		break;
	}
	case 2:{
        printf("请输入你要测试的次数：");
        count=InputCheck();
        printf("自定义数据测试花费时间：\n");
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
		printf("排序结果\n");
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
		printf("请输入第几小：\n ");
		int k;
		scanf("%d",&k);
		int brr=FindKthMin(color,0,7, k);
		printf("第%d小的是：%d",k,brr);
		exit(0);
	}
	case 5:{
        break;
    }
    default:{
    	printf("                                  ____________________________________________________________\n");
		printf("                                  __*            ******************************            *__\n");
		printf("                                  __*                       输入错误！                     *__\n"); 
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
    printf("插入排序用时：%dms\n",time);
    time = 0;
    start = clock();
    for (i = 0; i < count; i++)
    {   
		readdata(num,a,fp); 
        MergeSort(a,0,num-1,a);        
    }
    end = clock();
    time += end - start;
    printf("归并排序用时：%dms\n",time);
 	time = 0;
 	start = clock();
    for ( i = 0; i < count; i++)
    {  
		readdata(num,a,fp);   
        QuickSort_Recursion(a,0,num-1);
    }
    end = clock();
    time += end - start;
    printf("快速排序(递归版)用时：%dms\n",time);
    time = 0;
    start = clock();
    for (i = 0; i < count; i++)
    {
    	readdata(num,a,fp);
        CountSort(a,num,GetMax(a,100));
    }
    end = clock();
    time += end - start;
    printf("计数排序用时：%dms\n",time);
    time = 0;
    start = clock();
    for (i = 0; i < count; i++)
    {
    	readdata(num,a,fp);
        RadixCountSort(a,num);
    }
    end = clock();
    time += end - start;
    printf("基数计数排序用时：%dms\n\n\n",time);
    printf("                                  ____________________________________________________________\n");
	printf("                                  __*            ******************************            *__\n");
	printf("                                  __*                   执行完成，拜拜啦！                 *__\n"); 
	printf("                                  __*            ******************************            *__\n");
	printf("                                  ____________________________________________________________\n");
	system("pause");
	exit(0);    
}
