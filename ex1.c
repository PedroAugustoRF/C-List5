#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int i = 1;

    while(i <= 20){
        printf("pneumoultramicroscopicossilicovulcanoconiótico. \n");
        i++;
    }
    return 0;
}
