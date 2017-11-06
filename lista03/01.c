#include <stdio.h>

int conta_vogais(char *vet)
{
    int i = 0, contador = 0;
    while (vet[i] != '\0') {
        if (vet[i] == 'a' || vet[i] == 'e' || vet[i] == 'i' || vet[i] == 'o' || vet[i] == 'u') contador++;
        i++;
    }
    return contador;
}

int main()
{
    char entrada[255];
    int contador;
    
    fgets(entrada, 255, stdin);
    
    contador = conta_vogais(entrada);
    
    printf("%d\n", contador);
    
    return 0;
}