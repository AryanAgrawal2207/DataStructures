#include <stdio.h>
void simplemerge (int a[],int f,int s,int t)
{
   int i,j,k,temp[20],w;
   i=f;j=s;k=-1;
   while(i<=s-1 && j<=t)
   if(a[i]<a[j])
   {
       k++;
       temp[k]=a[i];
       i++;
   }
   else
   {
       k++;
       temp[k]=a[j];
       j++;
   }
   if(i>s-1)
   {
   for(w=j;w<=t;w++)
   {
       k++;
       temp[k]=a[w];
   }
   }
   else
   {
   for(w=i;w<=s-1;w++)
   {
       k++;
       temp[k]=a[w];
   }
   }
   for(w=0;w<=k;w++)
   a[f+w]=temp[w];
}


void mergesort(int a[],int l,int r)
{
    int mid;
    mid=(l+r)/2;
    if(l!=r)                     
    {
       mergesort(a,l,mid);
       mergesort(a,mid+1,r);
       simplemerge(a,l,mid+1,r);
    }
}
int main()
{
    int a[100],n;
    printf("Enter size of array to be sorted: \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d: \n",i+1);
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    printf("After merge sort the array is: \n");
     for(int i=0;i<n;i++)
     {
        printf("%d ",a[i]);
    }
    return 0;
}