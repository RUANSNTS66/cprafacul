#include <stdio.h>

int fatorial(int num){
    int i = 1, fat = 1;

    if(num < 0){
        printf("nao existe fatorial de negativo");
    }else{
        for (i = 1; i <= num; i++) {
            fat *= i;
        }
        return fat;
    }
}

int main(){
    int num, fat;

    printf("\n digite um numero pra achar fatorial: ");
    scanf("%d", &num);

    fat = fatorial(num);
    printf("\n %d", fat);
}
