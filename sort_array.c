#include <stdio.h>
#define MAX 100

int main()
{
    int arr[MAX], i, j, n;
    int temp;   
    printf("Enter the total number of elements");
    scanf("%d", &n);
    
    printf("Enter the array elements");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array elements after sorting\n");
    for (i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
