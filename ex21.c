#include <stdio.h>

int main(){
    int i = 1, num = 1, num2 = 1;

    printf("Digite um numero: \n");
    scanf("%d",&num);

    do{
        printf("%d \n", num2);
        num2++;
        i++;
    }while(i <= num);
    return 0;
}