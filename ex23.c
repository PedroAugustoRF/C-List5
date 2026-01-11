#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numUm = 0, numDois = 0, i = 0, soma = 0;

    do{
        printf("Digite um numero: \n");
        scanf("%d", &numUm);
        printf("Digite outro numero: \n");
        scanf("%d", &numDois);
        if(numUm > numDois){
            printf("O Primeiro valor tem que ser menor que o segundo! \n\n");
        }
    }while(numUm > numDois);

    for (i = numUm + 1; i < numDois; i++){
        soma += i;
    }
    printf("A soma dos valores entre %d e %d é %d! \n", numUm,numDois, soma);
    return 0;
}