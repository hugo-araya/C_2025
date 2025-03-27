#include <stdio.h>

int main(){
    int i;
    // Ejemplo con for
    printf("Ejemplo con for\n");
    for (i = 0; i < 10; i++){
        printf("%d\n", i);
    }
    // Ejemplo con while
    printf("\nEjemplo con while\n");
    i = 0;
    while (i < 10){
        printf("%d\n", i);
        i = i + 1;
    }
    return 0;
}