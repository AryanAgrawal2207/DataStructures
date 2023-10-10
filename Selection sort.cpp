#include<stdio.h>
void selection(int a[],int n)
{
    int i,j,min,p,temp;
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        p=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                p=j;
            }
        }
        temp=a[i];
        a[i]=a[p];
        a[p]=temp;
    }
}
int main()
{
    int a[100],n,i;
    printf("Enter the size for your array: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d \n",i+1);
        scanf("%d",&a[i]);
    }
    selection(a,n);
    printf("After selection sort the array is:\n");
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
     return 0;
}