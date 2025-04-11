/* Ejemplo del uso de variables locales*/ 
#include <stdio.h>   
int main (){
	int x;
	x = 10;
	if(x == 10){
	  	int x;   //Esta x oculta a la x externa
	  	x = 99;
	  	printf("x interna: %d\n", x);
	}
	printf ("x externa: %d\n", x);
	return 0;
}
