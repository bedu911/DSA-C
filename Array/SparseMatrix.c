#include <stdio.h>

void input(int r, int c, int a[50][50]) {
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);  
        }
    }
}

void display(int a[50][50], int r, int c) {
    printf("Matrix:\n");
    for(int i = 0; i < r; i++) {   
        for(int j = 0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int checkSparse(int a[50][50], int r, int c) {
    int zero = 0, nonzero = 0;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(a[i][j] == 0) {
                zero++;
            } else {
                nonzero++;
            }
        }
    }
    if(zero > (r * c) / 2) {
        printf("This is a Sparse Matrix.\n");
        return nonzero;
    } else {
        printf("This is Not a Sparse Matrix.\n");
        return -1;
    }
}

void representation(int a[50][50], int r, int c, int nonzero) {
    int s[nonzero][3], k = 0;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(a[i][j] != 0) {
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = a[i][j];
                k++;
            }
        }
    }

    printf("Sparse Matrix Representation (3-tuple form):\n");
    printf("Row\tCol\tValue\n");
    for(int i = 0; i < k; i++) {
        printf("%d\t%d\t%d\n", s[i][0], s[i][1], s[i][2]);
    }
}

int main() {
    int r, c, a[50][50];
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &c);
    
    input(r, c, a);       
    display(a, r, c);     
    int nonzero = checkSparse(a, r, c);
    
    if(nonzero != -1) {
        representation(a, r, c, nonzero);
    }

    return 0;
}
