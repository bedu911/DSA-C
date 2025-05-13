#include<stdio.h>
// Function to take input from user
void input(int a[], int n) 
{
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
}
// Function to display the array elements
void display(int a[], int n)
{
    printf("Array elements:\n");
    for(int i = 0; i < n; i++) 
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
// Function to delete an element at a given index
int deleteAtIndex(int a[], int n)
{
    int index;
    printf("Enter the index to be deleted: ");
    scanf("%d", &index);
    
    if(index >= 0 && index < n)
    {
        for(int i = index; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        return n - 1;
    }
    else
    {
        printf("Invalid index\n");
        return n;
    }
}

int main()
{
    int a[100], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if(n > 100 || n < 0)
    {
        printf("Invalid size.\n");
        return 0;
    }
    input(a, n);
    printf("Before deletion:\n");
    display(a, n);
    n = deleteAtIndex(a, n);
    printf("After deletion:\n");
    display(a, n);

    return 0;
}