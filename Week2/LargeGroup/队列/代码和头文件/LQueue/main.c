#include <stdio.h>
#include <stdlib.h>
#include "../head/LQueue.h" 
#include <windows.h>
void createtemp();
LQueue Q;
int choise=0;    
void *e;
int main()
{
	e=(void *)malloc(sizeof(void ));
	while(1)
	{
		createtemp();
		system("cls");
		switch(choise)
		{
			case 1:{
				InitLQueue(&Q);
				printf("��ʼ�����гɹ�\n");
				system("pause");
				break;
			}
			case 2:{
				DestoryLQueue(&Q);
				printf("���ٶ��гɹ�\n");
				system("pause");
				break;
			}
			case 3:{
				if(IsEmptyLQueue(&Q)==TRUE)
				{
					printf("����Ϊ��\n");
				}
				system("pause");
				break;
			}
			case 4:{
				GetHeadLQueue(&Q, e);
				system("pause");
				break;
			}
			case 5:{
				if(LengthLQueue(&Q)!=FALSE)
				{
					printf("���г��ȣ�%d\n",LengthLQueue(&Q));
				}
				system("pause");
				break;
			}
			case 6:{
				int t;
				printf("��������������ͣ�:\n");
                printf("1. ���� 2. �ַ��� 3. ������ 4. �ַ���\n");
                t=InputCheck();
                if(t>4||t<0){
                	printf("�����������\n");
                	continue;
				}
				printf("����������\n");
                switch(t)
                {
                	case 1:{
                		int a;
			        	a=InputCheck();
			            Q.rear->type='i';
			            EnLQueue(&Q, &a);
						break;
					}
					case 2:{
						fflush(stdin);
						char b;
						scanf("%c",&b);
						Q.rear->type='c';
						EnLQueue(&Q, &b);
						break;
					}
					case 3:{
						double c;
						scanf("%lf",&c);
						Q.rear->type='d';
						EnLQueue(&Q, &c);
						break;
					}
					case 4:{
						fflush(stdin);
						char d[20];
						scanf("%s", d);
						Q.rear->type='s';
						EnLQueue(&Q, d);
						break;
					}
				}
				system("pause");
				break;
			}
			case 7:{
				DeLQueue(&Q);
				system("pause");
				break;
			}
			case 8:{
				ClearLQueue(&Q);
				system("pause");
				break;
			}
			case 9:{
				TraverseLQueue(&Q,LPrint);
				system("pause");
				break;
			}
		}
	}
	return 0;
}

void gotoxy(int x,int y)
{
	COORD pos={x,y};
	HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut,pos);
 } 
void createtemp()
{
		gotoxy(47,3);
	printf("��ѡ�����");
	gotoxy(45,4);
	printf("��1����ʼ������");
	gotoxy(45,5);
	printf("��2�����ٶ���");
	gotoxy(45,6);
	printf("��3���������Ƿ�Ϊ��");
	gotoxy(45,7);
	printf("��4���鿴��ͷԪ��");
	gotoxy(45,8);
	printf("��5��ȷ�����г���");
	gotoxy(45,9);
	printf("��6����Ӳ���");
	gotoxy(45,10);
	printf("��7�����Ӳ���");
	gotoxy(45,11);
	printf("��8����ն���");
	gotoxy(45,12);
	printf("��9����������");
	gotoxy(45,13);
	printf("������Ҫ���еĲ���");
	gotoxy(64,13);
	choise=InputCheck();
	
	
}
