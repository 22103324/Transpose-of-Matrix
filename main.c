#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of matrix: ");
    scanf("%d", &n);
    
    int mat[n][n];
    
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("The original matrix is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("The transpose of the matrix is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
