#include <stdio.h>
#include <locale.h>

int main(){
	
	int a, b, c;
	
	setlocale(LC_ALL,"portuguese");
	printf("Notas");
	printf("\ndigite o primeiro numero da operação:");
	scanf("%d", &a);
	printf("\ndigite o segundo numero da operação:");
	scanf("%d", &b);
		
	if(a > b){
		c = a;
		a = b;
		b= c;
		
		printf("%d,%d", a, b);
	}else{
		printf("%d,%d", a, b);
	}
	
	return 0;
}
