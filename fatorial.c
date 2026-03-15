#include <stdio.h>

int main(){

    int numero;
    int resultado = 1;

    scanf("%d", &numero);

    if(numero < 0){
        printf("O numero deve ser maior ou igual a 0\n");
    }

    else if(numero == 0){
        printf("1\n");
    }

    else{
        for(int i = 1; i <= numero; i++){
            resultado *= i;
        }

    printf("%d", resultado);
    }

    return 0;
}