#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main(){
    char escape;
    printf("Aperte ESC para quebrar o loop \n");
    while(1){
    printf("Pedro Augusto \n");
    if (kbhit()) {
    escape = getch();
        if (escape == 27) {
            break;
        }
    }
    }
    return 0;
}