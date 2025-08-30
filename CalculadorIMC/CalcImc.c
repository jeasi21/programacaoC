#include <stdio.h>

int main(){
    float peso;
    float altura;
    char nome[50];
    float imc;

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    if (imc == 18.9)
    {
        printf("Imc: %.2f -> portanto peso ideal!",imc);
    }else{
        printf(" Imc: %.2f -> Buscar melhorar!", imc);
    }
    

    


    return 0;
}

