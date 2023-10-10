#include<stdio.h>
int main()
{
    int arr[50], num, x, y, temp;   
    printf( "Please Enter the number of elements for you array: \n");
    scanf("%d", &num);    
    for(x = 0; x < num; x++)
    {
      printf("Enter element %d:  \n",x+1);
	  scanf("%d", &arr[x]);	
	}
    for(x =num-2; x>0; x--)
    {      
        for(y = 0; y <= x; y++)        
            if(arr[y] > arr[y + 1])
            {              
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
    }
    printf("Array after implementing bubble sort: \n");
    for(x = 0; x < num; x++)
        printf("%d ", arr[x]);
    return 0;
}