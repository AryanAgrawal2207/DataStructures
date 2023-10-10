#include <stdio.h>  
struct stack  
{ 
  int a[20];  
  int top1, top2;  
} s;  
void push1()  
{  
    int x1;  
    if (s.top1==1+s.top2)  
    printf("Stack1 is full\n");  
    else  
    {  
        printf("Enter element to be pushed in stack1:\n");  
        scanf("%d", &x1);  
        s.top1++;  
        s.a[s.top1]=x1;  
    }  
}  
void push2()  
{  
    int x2;  
    if (s.top2==1+s.top1)  
    printf("Stack2 is overflow\n");  
    else  
    { 
        printf("\nEnter element to be pushed in stack2:\n");  
        scanf("%d", &x2);  
        s.top2--;  
        s.a[s.top2]=x2;  
    }  

}  
void pop1()  

{  
    if (s.top1 == -1)  
	  printf("Stack 1 is empty!!");  
    else  
    {  
        printf("Element popped from stack 1 is %d \n",s.a[s.top1]);  
        s.top1--;  
    }  

}  
void pop2()  
{  
    if (s.top2 == 20)  
    printf("Stack 2 is empty!!");  
    else  
    { 
        printf("Element popped from stack 2 is %d \n",s.a[s.top1]);  
        s.top2++;  
    }  
}  
void display1()  
{ 
    if (s.top1 == -1)  
    printf("Stack 1 is underflow\n");  
    else  
    {  
        printf("The element of the stack1 are \n");  
        for(int i = 1; i<= s.top1; i++)  
        printf("%d\n",s.a[i]);  
    }  
}  
void display2()  
{  
    if (s.top2==20) 
    printf("Stack 2 is underflow\n");  
    else  
    {  
        printf("The element of the stack2 are \n");  
        for(int i =0; i>= s.top2; i--)  
        printf("%d\n",s.a[i]);  
    }  
}   
void destory1()  
{  
    s.top1 = -1; 
    printf("Stack1 is destoryed \n");  
}  
void destory2()  
{  
    s.top2 =20;  
    printf("Stack2 is destoryed \n");  
}  
int main(void)  
{  
    int choice;    
    do  
    {  
        printf("MENU\n 1.PUSH in stack1\n 2.PUSH in stack2 \n 3.POP in stack1 \n 4.POP in stack2\n 5.DISPLAY in stack1\n 6.DISPLAY in stack2\n 7.DESTORY stack1\n 8.DESTORY stack2\n 9.EXIT\n");  
        scanf("%d", &choice);  
        switch(choice)  
        {  
            case 1: push1();  
            break; 
            case 2: push2();  
            break; 
            case 3: pop1();  
            break;  
            case 4: pop2();  
            break;  
            case 5: display1();  
            break;  
            case 6: display2();  
            break;  
            case 7: destory1();  
            break; 
            case 8: destory2();  
            break;  
            case 9: break;  
            default : printf("Invalid choice!!");  
        }  
    }  
    while(choice!=9);  
}













