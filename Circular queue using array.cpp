#include<stdio.h>
struct queue
{
	int a[5];
	int front,rear;
};
struct queue q;
void insert()
{
	int p,x;
	p=(q.rear+1)%5;
	if(p==q.front)
	  printf("Circular Queue Overflow\n");
	else
	  {
	  	printf("Enter element to be inserted:\n");
	  	scanf("%d",&x);
	  	q.a[p]=x;
	  	q.rear=p;
	  	q.front=1;
	  }
}
void delete1()
{
	if(q.front==-1)
	  printf("Circular Queue Underflow\n");
	else
	{
		printf("Element deleted is %d\n",q.a[q.front]);
		if(q.front==q.rear)
		   q.front=q.rear=-1;
		else
		   q.front=(q.front+1)%5;
	}
}
void display()
{
	int i;
	if(q.front==-1)
	  printf("Circular Queue Underflow\n");
	else
	{
		  printf("The Circular Queue is:\n");
		  for(i=q.front;i!=q.rear;i=(i+1)%5)
		     printf("%d ",q.a[i]);
		printf("%d ",q.a[i]);
	}
}
void destroy()
{
	q.front=q.rear=-1;
	printf("\nCircular queue has been destroyed!!\n");
}
int main()
{
	int choice;
	q.front=q.rear=-1;
	printf("Circular Queue can hold maximum of 5 objects.");
	do
	{
		printf("\nMENU\n1.Insert\n2.Delete\n3.Display\n4.Destroy\n5.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert();
			break;
			case 2:delete1();
			break;
			case 3:display();
			break;
			case 4:destroy();
			break;
			case 5:break;
			default:printf("Invalid Choice!");
		}
	}
	while(choice!=5);
}