//  Insertion of data At Any index
#include<stdio.h>
//Function To Take Data From User
void input(int a[],int n) 
{
    printf("Enter the Elements of Array\n");
   for(int i=0;i<n;i++) //TC:O(n)
   {
       scanf("%d",&a[i]);
   }
}
//Function To Display The Elements of Array
void display(int a[],int n)
{
    printf("Array Elements\n");
    for(int i=0;i<n;i++)//TC:O(n)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
// Function To Insert
int insert(int a[],int n)
{
    int val,index;
    printf("Enter the Data To be Insert:");
    scanf("%d",&val);
    printf("Enter index:");
    scanf("%d",&index);
    if(index>=0 && index<=n)
    {
        for(int i=n;i>index;i--)
        {
            a[i]=a[i-1];
        }
        a[index]=val;
        return n+1;
    }
    else
    {
        printf("Invalid Position\n");
        return n;
    }
    
}
int main()
{
    int a[100],n;
    printf("Enter the Size of Array:");
    scanf("%d",&n);
    if(n>100){ 
        return 0;
    }
    input(a,n);
    printf("Before Insertion\n");
    display(a,n);
    int N=insert(a,n);
    printf("After Insertion\n");
    display(a,N);
    return 0;
}