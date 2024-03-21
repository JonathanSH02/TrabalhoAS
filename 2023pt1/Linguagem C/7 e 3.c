#include <stdio.h>
#include <locale.h>

int main(){
	
	int x, y, z;
	
	setlocale(LC_ALL,"portuguese");
	printf("Divisivel por 3 e 7?");
	printf("\ndigite o numero da opera��o:");
	scanf("%d", &x);
	
	if(x % 3 == 0 && x % 7 == 0) {
		printf("e divisivel por 3 e 7");
	}else{
		printf("n�o funciona");
	}
	
	return 0;
}
