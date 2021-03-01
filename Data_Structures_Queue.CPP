#include<stdio.h>
#include<conio.h>
#define MAX 10

int front=-1,rear=-1;
int Queue[MAX];

//Creating INSERTION Operation Function
void insertQue(int num)
{
	if(rear==MAX-1)
	{
		printf("\n OVERFLOW");
	}
	else if(front==-1 && rear==-1)
	{
		rear=0;
		front=0;
		Queue[rear]=num;
	}
	else
	{
		rear=rear+1;
		Queue[rear]=num;
	}
}

//Displaying the Queue
void display()
{
	int i;
	printf("\n");
	printf("Front is %d ",front);
	printf("\t Rear is %d",rear);
	printf("\n Queue is :");
	for(i=front;i<=rear;i++)
	{
		printf("\t %d \t ",Queue[i]);
	}
}

//Creating DELETION Operation Function
void deleteQue()
{
	int val;

	if(front==-1 || front>rear)
	{
		printf("UNDERFLOW \n");
	}
	else
	{
		val=Queue[front];
		front=front+1;
	}
}

void main()
{
	clrscr();

	insertQue(10);
	insertQue(20);
	insertQue(30);
	insertQue(40);
	insertQue(50);
	insertQue(60);
	insertQue(70);
	display();
	deleteQue();
	deleteQue();
	display();

	getch();

}