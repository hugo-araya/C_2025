#include <stdio.h>

int main(){
    int verdura, empaque;
    verdura = 1;
    while (verdura <= 10){
        empaque = 1;
        while (empaque <= 10){
            printf("Verdura %d - Empaque %d\n", verdura, empaque);
            empaque++;
        }
        verdura++;
    }
    return 0;
}