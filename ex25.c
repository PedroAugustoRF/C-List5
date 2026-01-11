#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num = 0, soma = 0, div = 0;
    float media = 0.0;
    printf("Digite um valor: \n");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        soma += i;
        div++;
    }
    media = (float)soma / div;
    printf("A soma de todos os valores de 1 à %d é %d, e a média desse valor é %.2f \n", num, soma, media);
    return 0;
}