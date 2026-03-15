#include <stdio.h>

int main(){
    int a, b;

    printf("\nDigite dois numeros inteiros: ");
    scanf("%d", &a);
    scanf("%d", &b);

    int resultado = mdc(a, b);

    printf("Resultado: %d\n", resultado);
    return 0;
}

int mdc(int a, int b){
    if(b == 0){
        return a;
    }
    return(b, a % b);
    
}

