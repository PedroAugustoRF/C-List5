#include <stdio.h>

int main(){
    int i = 0, num = 0, num2 = 1;

    printf("Digite um numero: \n");
    scanf("%d",&num);

    for(i = 1; i <= num; i++){
        printf("%d \n", num2);
        num2++;
    }
    return 0;
}