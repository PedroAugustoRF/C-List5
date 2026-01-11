#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int um = 1, dez = 10, i = 1, soma = 0;

    for(i = um + 1; i < dez; i++){
        soma += i;
    }
    printf("A soma dos valores entre %d e %d é %d", um, dez, soma);
    return 0;
}