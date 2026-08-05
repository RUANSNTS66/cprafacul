#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um numero");
    scanf("%d", &num);
    
    if (num % 2 == 0){
        printf("\n eh par");
    }else{
        printf("\n eh impar");
    }

    if (num >= 0){
        printf("\n eh positivo");
    }else{
        printf("\n eh negativo");
    }

    if (num % 5 == 0){
        printf("\n eh multiplo de 5");
    }else{
        printf("\n nao eh multiplo de 5");
    }

    


    return 0;
}