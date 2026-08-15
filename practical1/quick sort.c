#include <stdio.h>

void quickSort(int arr[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[(low + high) / 2];
    int temp;

    while(i <= j)
    {
        while(arr[i] < pivot)
            i++;

        while(arr[j] > pivot)
            j--;

        if(i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if(low < j)
        quickSort(arr, low, j);

    if(i < high)
        quickSort(arr, i, high);
}

int main()
{
    int arr[5], i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    quickSort(arr, 0, 4);

    printf("Sorted array:\n");

    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}