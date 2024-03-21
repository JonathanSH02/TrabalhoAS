#include <stdio.h>
#include <locale.h>

int main(){
	
	int p1, p2, m;
	
	setlocale(LC_ALL,"portuguese");
	printf("Notas");
	printf("\ndigite o primeiro numero da operação:");
	scanf("%d", &p1);
	printf("\ndigite o segundo  numero da operação:");
	scanf("%d", &p2);
	
	m = (p1 + p2) / 2 ;
	
	if(m >= 5) {
		printf("aprovado");
	}else{
		printf("não aprovado");
	}
	
	return 0;
}
