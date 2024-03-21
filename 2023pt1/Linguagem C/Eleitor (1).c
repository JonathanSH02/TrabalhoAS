#include<stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	int n;
			
	printf("idade:");
	scanf("%d", &n);
	
	if(n < 16){
		printf("Não eleitor");
	}else{
		if(n >= 18 && n <= 65){
		printf("Obrigatório");
	}else{
		printf("Facultativo");
	}
}

return 0;
}
