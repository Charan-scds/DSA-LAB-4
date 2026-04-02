#include <stdio.h>
int main() 
{
    int n, i, j, min, temp;
    int price[100];
    printf("Enter number of products: ");
    scanf("%d", &n);
    printf("Enter prices:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &price[i]);
    }
    for(i = 0; i < n-1; i++) 
    {
        min = i;
        for(j = i+1; j < n; j++) 
        {
            if(price[j] < price[min]) 
            {
                min = j;
            }
        }
        temp = price[i];
        price[i] = price[min];
        price[min] = temp;
    }
    printf("Sorted Prices:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", price[i]);
    }
    return 0;
}