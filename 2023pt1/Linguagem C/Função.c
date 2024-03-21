#include <stdio.h>
#include <locale.h>

int main(){
	
	float A, B, C, D, R, S;
	
	setlocale(LC_ALL,"portuguese");
	printf("Primeiro numero:");
	scanf("%f", &A);
	printf("\nSegundo numero:");
	scanf("%f", &B);
	printf("\nTerceiro numero:");
	scanf("%f", &C);
	
	R = (A + B)*(A + B);
	S = (B + C)*(B + C);
	D = (R + S)/2;
	
	printf("\nResultado:%.2f", D);
	
	return 0;
}
