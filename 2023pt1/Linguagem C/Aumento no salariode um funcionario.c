#include <stdio.h>
#include <locale.h>

int main(){
	
	float Salario, NovoSalario, Taxa, Aumento, real;
	
	setlocale(LC_ALL,"portuguese");
	printf("Sal�rio atual:");
	scanf("%f", &Salario);
	printf("\nTaxa:");
	scanf("%f", &Taxa);
	
	Aumento = Salario * Taxa/100;
	NovoSalario = (Salario + Aumento);
	
	printf("\nO funcion�rio teve um aumento de %.1f e seu sal�rio atual � de %.1f", Aumento, NovoSalario);
	
	return 0;
}
