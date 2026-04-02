#include <stdio.h>
int main() 
{
    int n, i, j, temp;
    int marks[100];
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter marks:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &marks[i]);
    }
    for(i = 0; i < n-1; i++) 
    {
        for(j = 0; j < n-i-1; j++) 
        {
            if(marks[j] > marks[j+1]) 
            {
                temp = marks[j];
                marks[j] = marks[j+1];
                marks[j+1] = temp;
            }
        }
    }
    printf("Sorted Marks:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", marks[i]);
    }
    return 0;
}