//572
#include<stdio.h>
void main()
{
    int n ;
    printf("enter the number of elements u wants");
    scanf("%d" , &n);
    int arr[n],i,j,k,smallest,temp;
    for ( k = 0; k < n; k++)
    {
        printf("enter the %d value of the array\n" , k);
        scanf("%d" , &arr[k]);


    }
    
    for (i = 0; i < n-1; i++)
    {
        smallest = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[smallest]>arr[j])
            {
                smallest =j ;
            }
            
        }

        if (i!=smallest)
        {
            temp=arr[i];
            arr[i]=arr[smallest];
            arr[smallest]=temp;
        }
        
        
    }
    
    for (int l = 0; l < n; l++)
    {
        printf("%d\t" , arr[l]);
    }
    
}