#include<stdio.h>

void main()
{
    int  i  ,j, temp , arr[10];
    printf("Enter 10 numbers of the error\n");
    for ( i = 0; i < 10; i++)
    {
        printf("enter the %d value of the array\n" , i);
        scanf("%d" , &arr[i]) ;
    }
    
    for ( i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j] ;
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n" , arr[i]);
    }
    
    
}