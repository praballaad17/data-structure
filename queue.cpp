#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	int item,que[100],a,r,rear=0,front=0,i;
	
	for(;;)
	{
	printf("main menu\
	1.add \n\
	2.remove\n\
	3.display\n\
	4.exit\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			if(rear==100)
			printf("queue is full\n");
			else
			{
				printf("enter the item\n");
				scanf("%d",&item);
				que[rear]=item;
				printf("position: %d and item:%d is added\n",rear+1,item);
				rear++;
			}
			break;
		case 2:
			if(front==rear)
			printf("queue is empty\n");
			else
			{
				printf("position: %d and item:%d is removed\n",front+1,que[front]);
				front++;
				
			}
			break;
		case 3:
			for(i=front;i<rear;i++)
			{
				printf("position:%d item:%d\n",i+1,que[i]);
			}
			break;
		case 4: 
			exit(0);
	}
	//printf("do you want to continue Yes:y NO:n\n");
	//scanf("%c",&r);
	}
	//while(r=='y'||r=='Y');
}
