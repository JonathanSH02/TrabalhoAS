#include <stdio.h>
#include <locale.h>

int main(){
	
	int idade;
	
	setlocale(LC_ALL,"portuguese");
	printf("Notas");
	printf("\nQula sua idade:");
	scanf("%d", &idade);
	
	if(idade >= 18) {
		printf("Maior de idade");
	}else{
		printf("Menor de idade");
	}
	
	return 0;
}
