#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int i = 1;

    do{
      printf("paraclorobenzilpirrolidinonetilbenzimidazol \n");
      i++;
    }while(i <= 20);
    return 0;
}

