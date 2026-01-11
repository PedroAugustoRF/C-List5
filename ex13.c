#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int i = 0, idade = 0;

    do{
        printf("Qual sua idade? \n");
        scanf("%d", &idade);
    }while(idade > 0 && idade <= 123);
    return 0;
}

