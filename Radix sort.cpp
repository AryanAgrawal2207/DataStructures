#include<stdio.h>
void radixsort(int a[],int n)
{
    int i,j,z,k,e=1,digit;
    int c[10],bucket[100][100];
    for(i=1;i<=3;i++)
    {
        for(j=0;j<=9;j++)
           c[j]=-1;
        for(j=0;j<=n-1;j++)
        {
            digit=(a[j]/e)%10;
            c[digit]++;
            bucket[c[digit]][digit]=a[j];
        }
        z=0;
        for(j=0;j<=9;j++)
          if(c[j]!=-1)
          {
              for(k=0;k<=c[j];k++)
              {
                  a[z]=bucket[k][j];
                  z++;
              }
          }
          e=e*10;
    }
}
int main()
{
int a[100],i,n;
printf("Enter size of array to be sorted:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element %d: \n",i+1);
scanf("%d",&a[i]);
}
radixsort(a,n);
printf ("After radix sort array is:\n ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}