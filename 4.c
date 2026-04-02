#include <stdio.h>
void quickSort(int arr[], int low, int high) 
{
    int i = low, j = high, pivot = arr[(low + high) / 2], temp;
    while(i <= j) 
    {
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;
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
    int n, i;
    int roll[100];
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter roll numbers:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &roll[i]);
    }
    quickSort(roll, 0, n-1);
    printf("Sorted Roll Numbers:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", roll[i]);
    }
    return 0;
}