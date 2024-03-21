#include<stdio.h>

int main(){
	int p, e, m;
			
	printf("Peso:");
	scanf("%d", &p);
	
	if(p > 50){
		e = (p - 50);
		m = e * 4;
		printf("%d excesso,%d multa", e, m);
	}else{
		printf("0 excesso,0 multa");
	}
	return 0;
}
