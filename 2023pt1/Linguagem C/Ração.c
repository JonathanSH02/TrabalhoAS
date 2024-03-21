#include <stdio.h>
#include <locale.h>

int main(){
	
	float pkg, pg, C1, C2, CT, resto;
	
	setlocale(LC_ALL,"portuguese");
	printf("Peso do pacote da ração:");
	scanf("%f", &pkg);
	
	pg = pkg*1000;
	
	printf("\nQuantida consumida pelo primeiro gato:");
	scanf("%f", &C1);
	printf("\nQuantida consumida pelo segundo gato:");
	scanf("%f", &C2);
	
	CT = 5*(C1 + C2);
	
	resto = pg - CT;
	
	printf("\nSobra de ração apos 5 dias:%.2f", resto);
	
	return 0;
}
