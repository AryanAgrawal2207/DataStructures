#include<stdio.h>
struct stack
{
    int a[100];
    int top;
};
struct stack s;
void push(int n)
{
    int x;
    if(s.top==n-1)
    printf("Sorry!Stack is full\n");
    else
    {
        printf("Enter element to be pushed into the array:\n");
        scanf("%d",&x);
        s.top++;
        s.a[s.top]=x;
    }
}
void pop()
{
   if(s.top==-1)
   printf("Stack is already empty\n");
   else
   {
       printf("Element popped from the array is %d\n",s.a[s.top]);
       s.top--;
   }
}
void display()
{
    if(s.top==-1)
    printf("Nothing to show!stack is empty.\n");
    else
    {
        printf("The elements present in the stack are:\n");
        for(int i=0;i<=s.top;i++)
        printf("%d\n",s.a[i]);
    }
}
void destroy()
{
    s.top=-1;
    printf("Stack has been destroyed!\n");
}
int main()
{
   
    int choice,n;
    s.top=-1;
    printf("Enter the number of elements in the stack:");
    scanf("%d",&n);
    do
    {
        printf("MENU\n1.Push\n2.Pop\n3.Display\n4.Destroy\n5.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push(n);
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:destroy();
            break;
            case 5:
            break;
            default:
            printf("Invalid choice!");
        }
    }
    while(choice!=5);
   
}