#include <stdio.h>

int main(){
    
    int valor, resto;
    printf("insira um numero: ");
    scanf("%d", &valor);
    
    resto = valor%2;
    
    if(resto == 0){
        printf("O numero inserido eh par\n");
    } else{
        printf("O numero inserido eh impar\n");
    }
    
    return 0;
}