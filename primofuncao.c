#include <stdio.h>

void primo(int num){
    int div = 0, i;

    for(i = 1; i <= num; i++){
        if (num % i == 0){
            div++;
        }
        if (div > 2){
            break;
        }
    }
    if (div == 2){
        printf("\n numero %d é primo", num);
    }else{
        printf("\n numero %d nao é primo", num);
    }
}

int main(){
    int num;

    while (1){
        printf("\n digite um numero positivo ou 0 p sair: ");
        scanf("%d", &num);
        if (num > 0){
            primo(num);
        }else{
            break;
        }
    }
}
