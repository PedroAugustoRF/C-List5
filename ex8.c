#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    int i = 1, reps = 0;

    printf("Digite uma palavra: \n");
    fgets(nome, 50, stdin);
    printf("Escreva a quantidade de vezes que esse numero vai ser repetido: ");
    scanf("%d", &reps);

    for(i = 1; i <= reps; i++){
        printf("%d: %s \n", i, nome);
    }

    return 0;
}

