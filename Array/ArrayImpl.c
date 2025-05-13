#include<stdio.h>
void input(int a[],int n){
    printf("Enter the Array ELements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void display(int *a,int n){
    printf("Array Elements: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[100],n;
    printf("Enter the Size of Array: ");
    scanf("%d",&n);
    input(a,n);
    display(a,n);
    return 0;
}