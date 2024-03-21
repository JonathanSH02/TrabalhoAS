#include <stdio.h>

int main(){
	float N;
	printf("Qual numero?:");
	scanf("%f",&N);
	
	if(N > 20){
		printf("Maior que 20");
	}
	if(N == 20){
		printf("Igual a 20");
	}
	
	if(N < 20){
		printf("Menor que 20");
	}
	
	return 0;
}
