#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*prev,*next;
};
struct node *newrec,*first,*last,*temp;

void ins_beg(){
    int x;
    newrec=(struct node *)malloc(sizeof(struct node));
    printf("Enter element to be inserted at beginning: ");
    scanf("%d",&x);
    newrec->data=x;
    if(first==NULL && last==NULL)
    {
        first = last = newrec;
        newrec->next=NULL;
    }
    else
    {
        first->prev=newrec;
        newrec->next=first;
        first=newrec;
    }
    newrec->prev=NULL;
}

void ins_end(){
    int x;
    newrec=(struct node *)malloc(sizeof(struct node));
    printf("Enter element to be inserted at end: ");
    scanf("%d",&x);
    newrec->data=x;
    if(first==NULL && last==NULL)
    {
        first = last = newrec;
        newrec->prev=NULL;
    }
    else
    {
        newrec->prev=last;
        last->next= newrec;
        last=newrec;
    }
    last->next=NULL;
}

void ins_pos(int p)
{
    int x,i;
    printf("Enter element to be inserted at position %d: ",p);
    scanf("%d",&x);
    newrec=(struct node *)malloc(sizeof(struct node));
    newrec->data=x;
    temp=first;
    for(i=1;i<p-1;i++)
    {
        temp=temp->next;
    }
    struct node *a=temp->next;
    a->prev=newrec;
    newrec->next=a;
    temp->next=newrec;
    newrec->prev=temp;
}

void ins_ele(int y)
{
    int x;
    printf("Enter element to be inserted at position %d: ",y);
    scanf("%d",&x);
    newrec=(struct node *)malloc(sizeof(struct node));
    newrec->data=x;
    temp=first;
    while(temp->data!=y)
    {
        temp=temp->next;
    }
    struct node *a=temp->next;
    a->prev=newrec;
    newrec->next=a;
    temp->next=newrec;
    newrec->prev=temp;
}

void del_beg()
{
    if(first==NULL)
    {
     printf("Double link list underflow.\n");
    }
    else{
        printf("Element deleted is %d\n",first->data);
        if(first==last)
        {
            first=last=NULL;
        }
        else{
            first=first->next;
            first->prev=NULL;
        }
    }
}

void del_end()
{
    if(first==NULL)
    {
     printf("Double link list underflow.\n");
    }
    else{
        printf("Element deleted is %d\n",last->data);
        if(first==last)
        {
            first=last=NULL;
        }
        else{
            last=last->prev;
            last->next=NULL;
        }
    }
}

void del_pos(int s)
{
    temp=first;
    for(int i=1;i<s-1;i++)
    {
        temp=temp->next;
    }
    struct node *a=temp->next, *b=a->next;
    printf("Element deleted is %d at position %d\n",a->data,s);
    temp->next=b;
    b->prev=temp;
}

void del_ele(int t)
{
    temp=first;
    while(temp->data!=t)
    {
        temp=temp->next;
    }
    struct node *a=temp->next, *b=a->next;
    printf("Element deleted is %d after element %d\n",a->data,t);
    temp->next=b;
    b->prev=temp;
}

void display_f()
{
    if(first==NULL)
    {
     printf("Double link list underflow.\n");
    }
    else{
      printf("Element of double link list in forward order are\n");
      temp=first;
      while(temp!=NULL)
      {
          printf("%d\n",temp->data);
          temp=temp->next;
      }
    }
}

void display_b()
{
    if(first==NULL)
    {
     printf("Double link list underflow.\n");
    }
    else{
     printf("Element of double link list in backward order are\n");
      temp=last;
       while(temp->prev!=NULL)
      {
          printf("%d\n",temp->data);
          temp=temp->prev;
      }
       printf("%d\n",first->data);
    }
}

void destroy()
{
    first=last=NULL;
    printf("Double link list destroyed");
}

int main (){
    int ch;
    int p,y,s,t;
    temp=first=last=NULL;
   
    do{
        printf ("MENU\n1)insert at beginning\n2)insert at end\n3)insert at position \n4)insert after element\n5)delete at beginning\n6)delete at end\n7)delete at position\n8)delete after element\n9)display forward\n10)display backward\n11)destroy\n12)exit\n");
        scanf ("%d",&ch);
        switch (ch){
            case 1:ins_beg();
                    break;
             case 2:ins_end();
                    break;
             case 3:printf("Enter position at which you want to add element:");
                    scanf("%d",&p);
                    ins_pos(p);
                    break;
             case 4:printf("Enter element after which tou want to add element:");
                    scanf("%d",&y);
                    ins_ele(y);
                    break;
             case 5:del_beg();
                    break;
             case 6:del_end();
                    break;
             case 7:printf("Enter position at which you want to delete:");
                    scanf("%d",&s);
                    del_pos(s);
                    break;
             case 8:printf("Enter element after which you want to delete:");
                    scanf("%d",&t);
                    del_ele(t);
                    break;
             case 9:display_f();
                    break;
             case 10:display_b();
                    break;
             case 11:destroy();
                    break;
             case 12:printf ("you have exited successfully\n");
                    break;
            default :printf ("invalid input\n");
        }
    }while (ch!=12);
   

    return 0;
}
