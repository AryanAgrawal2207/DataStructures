#include <stdio.h>
void insertion(int a[],int n)
{
    int i,x,j;
    for(i=1;i<n;i++)
    {
        x=a[i];
        j=i;
        while(j>0 && a[j-1]>x)
        {
            a[j]=a[j-1];
            j=j-1;
        }
        a[j]=x;
    }
}
int main()
{
    int a[100],n,i;
    printf("Enter the size of array to be sorted: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: \n",i+1);
        scanf("%d",&a[i]);
    }
    insertion(a,n);
    printf("After insertion sort the array is\n");
    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
    return 0;
}