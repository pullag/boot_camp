#include <stdio.h>
#define MAX 100

int main()
{
    int arr[MAX], i, j, n;
    int temp;
    printf("Enter the size of the array");
    scanf("%d", &n);
    printf("Enter the elements");
    for(i=0; i<n; i++)
    scanf("%d", &arr[i]);
    
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Elements sorted are");
    for(i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
}
