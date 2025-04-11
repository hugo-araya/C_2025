#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int prod = 1;
    printf("n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++){
        prod = prod * n*(n+1);
    }
    printf("Producto: %d\n", prod);
    return 0;
}