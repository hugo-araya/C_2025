#include <stdio.h>

int potencia(int, int);

int main(){
    int base, exponente, resultado;

    printf("Base: ");

    scanf("%d", &base);
    printf("Exponente: ");
    scanf("%d", &exponente);
    resultado = potencia(base, exponente);
    printf("%d elevado a %d es %d\n", base, exponente, resultado);
    return 0;
}

int potencia(int a, int b){
    int pot, i, pot1, j;
    i = 0;
    //pot = a;
    pot1 = a;
    while (i < b){
        j = 0;
        while (j <= i){
            pot1 = a + pot1;
            j++;
        }
        //pot = pot + pot1;
        i++;
    }
    return pot;
}