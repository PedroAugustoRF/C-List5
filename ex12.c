#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int i = 1;

    while(i != 0){
        printf("Digite um número, se digitar 0 o laço de repetição acaba: \n");
        scanf("%d", &i);
    }
    return 0;
}

