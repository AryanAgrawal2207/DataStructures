#include <stdio.h>
int partition (int a[],int l, int r)
{
    int i,j,x,temp;
    x=a[l];
    i=l;
    j=r;
    while (i<j) 
    {
        while (a[i]<=x && i<=r) 
            i++;
        while(a[j]>x) 
            j--;
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[l];
    a[l]=a[j];
    a[j]=temp;
    return j;
}

void quicksort (int a[], int l, int r) 
{
    int p;
    if(l<r) 
    {
       p=partition(a,l,r);
        quicksort(a,l,p-1);
        quicksort(a,p+1,r);
    }
}
int main() 
{
    int a[100],n;
    printf("Enter size of array to be sorted:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       printf("Enter element %d: \n",i+1);
       scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("After quick sort the array is: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}