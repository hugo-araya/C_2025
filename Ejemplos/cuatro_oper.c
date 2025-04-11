#include <stdio.h>
int main(){
	int prim; 
	float seg;
	float resul;
	char oper;
	printf("\nPrimer numero: ");
	scanf("%d",&prim);
	printf("\nOperacion a realizar (+, -, *, /): "); 
	oper = getc(stdin);    
	oper = getc(stdin);   
	printf("\nSegundo numero: ");
	scanf("%f",&seg); 
	if(oper == '+')
		resul = prim + seg;	  
	if(oper == '-')	  
		resul = prim - seg;	  
	if(oper == '*')	  
		resul = prim * seg;	 
	if(oper == '/')	 
		resul = prim / seg; 
	printf("\nEl resultado de la operacion %d %c %f es %f", prim, oper, seg, resul);
	return 0;
}
