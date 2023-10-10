#include<stdio.h>
void adjust(int a[],int i,int n)
{
	int x,j;
	x=a[i];
	j=i*2;
	while(j<=n)
	{
		if(j<n && a[j]<a[j+1])
		  j++;
		if(x>a[j])
		   break;
		a[j/2]=a[j];
		j=j*2;
	}
	a[j/2]=x;
}
int main()
{
	int a[100],i,n,temp;
	printf("Enter size of array to be sorted:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { 
  	  printf("Enter element %d:\n",i+1);
  	  scanf("%d",&a[i]);
    }
    for(i=n/2;i>=1;i--)
        adjust(a,i,n);
    for(i=n;i>=2;i--)
    {
    	temp=a[1];
    	a[1]=a[i];
    	a[i]=temp;
    	adjust(a,1,i-1);
	}
	printf("After heap sort the array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
return 0;
}