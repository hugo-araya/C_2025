#include<stdio.h>

int main(){
    int numero, mayor;
    mayor = -1;
    printf("Ingrese numero: ");
    scanf("%d", &numero);
    while (numero > 0){
        if (numero > mayor){
            mayor = numero;
        }
        printf("Ingrese numero: ");
        scanf("%d", &numero);  
    }
    printf("El mayor es : %d\n", mayor);
    return 0;
}