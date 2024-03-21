#include <stdio.h>
#include <locale.h>

int main(){
	
	float v1, v2, v3, v4, media;
	
	setlocale(LC_ALL,"portuguese");
	printf("Valor do primeira cota��o do carro:");
	scanf("%f", &v1);
	printf("\nValor da segunda cota��o do carro:");
	scanf("%f", &v2);
	printf("\nValor da ter�eira cota��o do carro:");
	scanf("%f", &v3);
	printf("\nValor da quarta cota��o do carro:");
	scanf("%f", &v4);
	
	media = (v1+v2+v3+v4)/4;
	
	printf("\nMedia:%.1f", media);
	
	return 0;
}
