#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    for(int i = 1; i <= 10; i++){
        int aleatorio = rand() % 100+ 1;

        printf("%d \n", aleatorio);
    }
}

