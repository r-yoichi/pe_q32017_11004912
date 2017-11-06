#include <stdio.h>

void soma_vetores(int *v1, int *v2, int *v3)
{
    int i;
    
    for (i=0; i<5; i++) {
        v3[i] = v1[i] + v2[i];
    }
}

int main()
{
    int v1[5], v2[5], v3[5], i;
    
    for (i=0; i<5; i++) {
        scanf("%d", &v1[i]);
    }
    
    for (i=0; i<5; i++) {
        scanf("%d", &v2[i]);
    }
    
    soma_vetores(v1, v2, v3);
    
    for (i=0; i<5; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");
    
    return 0;
}