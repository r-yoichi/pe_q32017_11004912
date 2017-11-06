#include <stdio.h>
#include <string.h>

void inverte_string(char *entrada, char *saida)
{
    int i = 0;
    int tamanho = strlen(entrada) - 2;
    
    while (tamanho >= 0) {
        saida[i] = entrada[tamanho];
        i++;
        tamanho--;
    }
}

int main()
{
    char entrada[255] = {0}, saida[255] = {0};

    fgets(entrada, 255, stdin);
    
    inverte_string(entrada, saida);
    
    printf("%s\n", saida);
    
    return 0;
}