#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char nome[20];

    printf("Digite seu primeiro nome: ");
    fgets(nome, 20, stdin);

    for(;;){
        printf("%d \n", nome);
    }

    return 0;
}

