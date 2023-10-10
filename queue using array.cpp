#include<stdio.h>
struct queue
{
	int a[20];
	int front,rear;
};
struct queue q;
void insert(int n)
{
	int x;
	if(q.rear==(n-1))
	  printf("Queue is already full!!!\n");
    else
    {
    	printf("Enter element to be inserted in the queue:\n");
    	scanf("%d",&x);
    	q.rear++;
    	q.a[q.rear]=x;
    	    if(q.front==-1)
    	    q.front=0;
	}
}
void delete1()
{
	if(q.front==-1)
	  printf("Queue is empty nothing to delete!!\n");
	else
	{
		printf("Element deleted is %d\n",q.a[q.front]);
		if(q.front==q.rear)
		  q.front=q.rear=-1;
		else
		  q.front++;
	}
}
void display()
{
	if(q.front==-1)
	  printf("Sorry!Nothing to show,Queue is empty!!\n");
	else
	{
		for(int i=q.front;i<=q.rear;i++)
		printf("%d  ",q.a[i]);
	}
}
void destroy()
{
	printf("Queue has been destroyed!!\n");
	q.front=q.rear=-1;
}
int main()
{
	int choice,n;
	q.front=q.rear=-1;
	printf("Enter the number of elements in the queue:");
	scanf("%d",&n);
	do
	{
		printf("MENU\n1.Insert\n2.Delete\n3.Display\n4.Destroy\n5.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert(n);
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