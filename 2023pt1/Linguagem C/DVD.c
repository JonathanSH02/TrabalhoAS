#include <stdio.h>

int main(){
	float valor,total;
	
	printf("valor do DVD: ");
	scanf("%f", &valor);
	
	total = valor*3;
	
	printf("\n Valor total do DVD:%.1f",total);
	
	return 0;	
}
