#include <stdio.h>

int main() {
    int num, soma=0, menor, qtd=0, cont=0, contador=0;
    float media=0, soma_par=0;

    printf("entre com um numero ou digite zero ou negativo para encerrar");
    scanf("%d", &num);
    do{
        if(num > 0){}
            if (num % 3 == 0){
                soma += num;
            }
            if (num % 2 == 0){
                soma_par += num;
                cont++;
            }
            if (num % 5 == 0 && num > 50){
                qtd++;
            }
            if (cont == 0 || num < menor){
                menor = num;
            }
            contador++;
            printf("\n entre com um numero ou digite zero ou negativo para encerrar");
            scanf("%d", &num);
    }while(num > 0);
    if (cont > 0){
        media = soma_par / cont;
    }
    printf("soma dos multiplos de 3: %d\n", soma);
    printf("media dos pares: %.2f\n", media);
    printf("quantidade de multiplos de 5 maiores que 50: %d\n", qtd);
    printf("menor numero lido: %d\n", menor);

}


