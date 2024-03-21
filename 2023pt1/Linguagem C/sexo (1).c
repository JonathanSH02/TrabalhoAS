#include<stdio.h>

int main(){
	char s;
	int h, pi;
			
	printf("sexo:");
	scanf("%c", &s);
	
	if(s == 'f' || s =='F' || s == "m" || s == "M"){
		printf("altura:");
		scanf("%d", &h);
		if(s == 'f' || s == 'F'){
		pi = (62.1* h)  - 44.7;
		printf("%d", pi);
	}else{
		pi =(72.7 * h) - 58;
		printf("%d", pi);
	}
	}else{
		printf("valor invalido");
	}
	return 0;
}
	
