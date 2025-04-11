#include <stdio.h>
#include <math.h>

int main(){
    int x, n;
    float suma = 0;
    printf("x: ");
    scanf("%d", &x);
    printf("n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++){
        suma = suma + sqrt(x*x -4);
    }
    printf("Suma: %f\n", suma);
    return 0;
}