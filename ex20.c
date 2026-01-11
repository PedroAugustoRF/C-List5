#include <stdio.h>

int main(){
    int i = 0, num = 0, num2 = 1;

    printf("Digite um numero: \n");
    scanf("%d",&num);

    while(i <= num) {
        printf("O numero digitado foi %d\n", num2);
        num2++;
        i++;
    }
    return 0;
}