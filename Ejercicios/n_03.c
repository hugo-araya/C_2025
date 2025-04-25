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
    int pot, i;
    i = 0;
    pot = 1;
    while (i < b){
        pot = a * pot;
        i++;
    }
    return pot;
}