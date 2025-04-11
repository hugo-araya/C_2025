#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float suma = 0;
    printf("n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++){
        suma = suma + pow(-1,i+1)*i/pow(2,i);
    }
    printf("Suma: %f\n", suma);
    return 0;
}