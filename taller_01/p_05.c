#include <stdio.h>
#include <math.h>

float p_01(int x, int n);
float p_02(int n);
float p_03(int n);
int p_04(int n);

int main(){
    int x, n;
    float suma1, suma2, suma3;
    int prod = 1;
    printf("x: ");
    scanf("%d", &x);
    printf("n: ");
    scanf("%d", &n);
    suma1 = p_01(x, n);
    suma2 = p_02(n);
    suma3 = p_03(n);
    prod = p_04(n);
    printf("Ejercicio 1: %f\n", suma1);
    printf("Ejercicio 2: %f\n", suma2);
    printf("Ejercicio 3: %f\n", suma3);
    printf("Ejercicio 4: %d\n", prod);   
    return 0;
}

float p_01(int x, int n){
    float suma = 0;
    for (int i = 1; i <= n; i ++){
        suma = suma + sqrt(x*x -4);
    }
    return suma;
}

float p_02(int n){
    float suma = 0;
    for (int i = 1; i <= n; i ++){
        suma = suma + (pow(2,i+1)-pow(2, i))/(i+1);
    }
    return suma;
}

float p_03(int n){
    float suma = 0;
    for (int i = 1; i <= n; i ++){
        suma = suma + pow(-1,i+1)*i/pow(2,i);
    }
    return suma;
}

int p_04(int n){
    int prod = 1;
    for (int i = 1; i <= n; i ++){
        prod = prod * n*(n+1);
    }
    return prod;
}