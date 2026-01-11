#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char nome[20];

    printf("Digite seu primeiro nome: ");
    fgets(nome, 20, stdin);

    do{
        printf("%d\n", nome);
      }while(1);

    return 0;
}

