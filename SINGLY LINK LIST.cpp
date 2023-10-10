#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};
struct node *first,*last ,*newrec, *temp;

void ins_beg(){
    int x;
    printf ("Enter element to be inserted at beginning\n");
    scanf ("%d",&x);
    newrec = (struct node *)malloc (sizeof (struct node));
    newrec->data = x;
    if (first==NULL){
        first =last =newrec;
        last->next=NULL;
    }
    else {
        newrec->next=first;
        first=newrec;
    }
}

void ins_end(){
    int x;
    printf ("Enter element to be inserted at end\n");
    scanf ("%d",&x);
    newrec = (struct node *)malloc (sizeof (struct node));
    newrec->data = x;
    if (first==NULL){
        first =last =newrec;
        last->next=NULL;
    }
    else {
        last->next=newrec;
        last=newrec;
    }
    last->next=NULL;
   
}

void ins_pos(int p){
    int x,i;
     printf ("Enter element to be inserted at position %d\n",p);
    scanf ("%d",&x);
    newrec = (struct node *)malloc (sizeof (struct node));
    newrec->data = x;
    temp=first;
    for (i=1;i<(p-1);i++){
        temp=temp->next;
    }
    newrec->next=temp->next;
    temp->next=newrec;
}

void ins_ele (int n){
    int x;
     printf ("Enter element to be inserted :\n");
    scanf ("%d",&x);
    newrec = (struct node *)malloc (sizeof (struct node));
   
    while (temp->data!=n){
        temp=temp->next;
    }
    newrec->next=temp->next;
    temp->next=newrec;
}

void dele_beg()
{
    if (first==NULL)
    {
        printf ("link list underflow\n");
    }
    else {
        printf ("the element deleted is %d\n",first->data);
        if(first ==last){
            first=first->next;
        }
    }
}

void del_end(){
    if (first=NULL){
        printf ("link list underflow\n");
    }
    else {
        printf ("the element deleted is %d\n",last->data);
        if (first==last){
            first =last =NULL;
        }
        else {
            temp=first;
            while(temp->next!=last)
            {
                temp=temp->next;
            }
            last=temp;
            last->next=NULL;
        }
    }
}

void del_pos(int p){
    int i;
    temp=first;
    for (i=1;i<(p-1);i++)
    {
        temp=temp->next;
    }
     printf ("the element deleted is %d\n",temp->next->data);
    temp->next=temp->next->next;
}
void del_ele(int p)
{
    int i;
    temp=first;
    while (temp->data!=p)
    {
        temp=temp->next;
    }
    printf ("the element deleted is %d\n",temp->next->data);
    temp->next=temp->next;
}
void display ()
{
    if (first==NULL)
	{
        printf ("link list underflow\n");
    }
    else {
        printf ("your link list is :\n");
        temp=first;
        while (temp->next!=NULL)
		{
            printf ("%d\n",temp->data);
            temp=temp->next;
        }
        printf ("%d\n",last->data);
    }
}

void destroy()
{
    printf ("your link list is destroyed\n");
    first =last =NULL;
}

int main() {
     int ch;
     first = last=NULL;
     int p,n,x,y;
    do
    {
    printf("MENU\n1.Insert at Beginning\n2.Insert at end\n3.Insert at position\n4.Insert after element\n5.Delete at Beginning\n6.Delete at end\n7.Delete at position\n8.Delete after element\n9.Display\n10.Destroy\n11.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
            case 1:ins_beg();
            break;
            case 2:ins_end();
            break;
            case 3:
            printf("enter a valid value of p\n");
            scanf("%d",&p);
            ins_pos(p);
            break;
            case 4:
            printf("Enter element after which element is to be inserted\n");
            scanf("%d",&n);
            ins_ele(n);
            case 5:dele_beg();
            break;
            case 6:del_end();
            break;
            case 7:
            printf("enter a valid value of p\n");
            scanf("%d",&x);
            del_pos(x);
            case 8:
            printf("Enter element to after which element is to be inserted\n");
            scanf("%d",&y);
            del_ele(y);
            case 9:display();
            break;
            case 10:destroy();
            break;
            default:printf("Invalid choice!!");
			break;
    }
    }
	while(ch!=11);
   

    
}