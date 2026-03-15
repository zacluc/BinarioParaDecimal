#include <stdio.h>

int main(){
    int numero;

    scanf("%d", &numero);

    if(2 < numero && numero < 1000){

        for(int i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", i, numero, numero*i);
        }
    }
    return 0;
}