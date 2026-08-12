//faca um programa q receba cinco idades, salarios e calcule o seguinte
//media das idade das pessoas que ganham mais de 5000
//quantidade de pessoas com o salário superior a 2000
//a media do salario das pessoas com mais de 40 anos
//a maior idade e o salario dessa pessoa

#include <stdio.h>

int main() {

    int idade;
    int qtd1 = 0, qtd2 = 0, qtd3 = 0;
    int maior_idade = 0;

    float salario;
    float media_idade = 0;
    float soma_idade = 0;
    float soma_sal = 0;
    float maior_salario = 0;
    float media_sal = 0;

    for (int cont = 0; cont < 5; cont++) {

        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);

        printf("Digite o salario da pessoa: ");
        scanf("%f", &salario);

        if (salario > 5000) {
            soma_idade += idade;
            qtd1++;
        }

        if (salario > 2000) {
            qtd2++;
        }

        if (idade > 40) {
            soma_sal += salario;
            qtd3++;
        }

        if (cont == 0 || idade > maior_idade) {
            maior_idade = idade;
            maior_salario = salario;
        }
    }

    if (qtd1 > 0) {
        media_idade = soma_idade / qtd1;
    }

    if (qtd3 > 0) {
        media_sal = soma_sal / qtd3;
    }


    printf("Media das idades das pessoas que ganham mais de 5000: %.2f\n",
           media_idade);

    printf("Quantidade de pessoas com salario superior a 2000: %d\n",
           qtd2);

    printf("Media do salario das pessoas com mais de 40 anos: %.2f\n",
           media_sal);

    printf("Maior idade: %d\n", maior_idade);

    printf("Salario dessa pessoa: %.2f\n", maior_salario);

    return 0;
}