#include <stdio.h>
#include <math.h>

float p_01(int x, int n);
float p_02(int n);
float p_03(int n);
int p_04(int n);
void menu(void);

int main(){
    int x, n, op;
    float suma1, suma2, suma3;
    int prod = 1;
    printf("x: ");
    scanf("%d", &x);
    printf("n: ");
    scanf("%d", &n);
    menu();
    printf("Opcion: ");
    scanf("%d", &op);
    while (op != 5){
        if (op == 1){
            suma1 = p_01(x, n);  
            printf("Ejercicio 1: %f\n", suma1);
        }
        if (op == 2){
            suma2 = p_02(n);
            printf("Ejercicio 2: %f\n", suma2);
        }
        if (op == 3){
            suma3 = p_03(n);
            printf("Ejercicio 3: %f\n", suma3);
        }
        if (op == 4){
            prod = p_04(n);
            printf("Ejercicio 4: %d\n", prod);  
        }
        menu();
        printf("Opcion: ");
        scanf("%d", &op);
    }
    printf("\n\nL I S T O\n");
    return 0;
}

void menu(){
    printf("\n\n");
    printf("1.- Ejercicio 1\n");
    printf("2.- Ejercicio 2\n");
    printf("3.- Ejercicio 3\n");
    printf("4.- Ejercicio 4\n");
    printf("5.- Salir \n");   
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