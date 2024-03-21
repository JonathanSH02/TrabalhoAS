#include <stdio.h>
#include <locale.h>

int main(){
	
	float area, raio, diametro;
	
	setlocale(LC_ALL,"portuguese");
	printf("Qual o raio do ciruclo:");
	scanf("%f", &raio);
	
	diametro = raio*raio;
	area = 3.14*diametro;
	
	printf("\n¡rea do circulo È:%.1f", area);
	
	return 0;
}
