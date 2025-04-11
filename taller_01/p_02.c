#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float suma = 0;
    printf("n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++){
        suma = suma + (pow(2,i+1)-pow(2, i))/(i+1);
    }
    printf("Suma: %f\n", suma);
    return 0;
}