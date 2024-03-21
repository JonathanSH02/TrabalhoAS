#include <stdio.h>

int main(){
	float Y, X, Auxiliar;
	
	printf("valor de x:");
	scanf("%f", &X);
	printf("\nvalor de y:");
	scanf("%f", &Y);
	
	Auxiliar = X;
	X = Y;
	Y = Auxiliar;
	
	printf("\nvalor de x:%.1f",X);
	printf("\n\nvalor de y:%.1f",Y);
	
	return 0;	
}
