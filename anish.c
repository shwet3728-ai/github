#include <stdio.h>
int main()
{
    int n, found=0;
    scanf("%d", &n);
    if (n < 2)
    {
        printf("No Second Largest Element");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int secondLargest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
            found = 1;
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
            found = 1;
        }
    }
    if (found)
    {
        printf("%d", secondLargest);
    }
    else
    {
        printf("No Second largest");
    }
    return 0;
}