#include<stdio.h>
void input(int *a,int d){
    for(int i=0;i<=d;i++){
        printf("Enter the Coefficient of y^%d=",i);
        scanf("%d",&a[i]);
    }
}
void display(int *a,int d){
    int f=1;
    for(int i=d;i>=0;i--){
        if(a[i]!=0){
            if(!f){
                printf("+ ");
            }
            printf("%dy^%d",a[i],i);
            f=0;
        }
    }
    printf("\n");
}
void sum(int *a,int *b,int *c,int d){
    for(int i=0;i<=d;i++){
        c[i]=a[i]+b[i];
    }
}
int main()
{
    int first[50],second[50],third[50],d;
    printf("Enter the Degree of Ploynomial:");
    scanf("%d",&d);
    printf("Enter the coefficient of First Ploynomial\n");
    input(first,d);
    printf("Enter the coefficient of Second Ploynomial\n");
    input(second,d);
    printf("First Ploynomial:");
    display(first,d);
    printf("second Ploynomial:");
    display(second,d);
    sum(first,second,third,d);
    printf("The Sum of First And Second Ploynomial ");
    display(third,d);
}