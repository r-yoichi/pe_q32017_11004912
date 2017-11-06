#include <stdio.h>

void calcula_transposta(int mat[][3], int trans[][3], int lin)
{
    int i, j;
    
    for (i=0; i<lin; i++) {
        for (j=0; j<3; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}

int main()
{
    int mat[3][3], trans[3][3],lin = 3, i, j;
    
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    calcula_transposta(mat, trans, lin);
    
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}