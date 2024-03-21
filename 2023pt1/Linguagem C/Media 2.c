#include<stdio.h>

int main(){
	int m1, m2, n1, n2;
			
	printf("primeira nota:");
	scanf("%d", &n1);
	printf("segunda nota:");
	scanf("%d", &n2);
	
	if(n1 >=0 && n1 <= 10 && n2 >= 0 && n2 <=10){
		m1 = (n1 + n2)/2;
	}
	if( m1 >= 5 ){
		printf("Aprovado");
	}else{
	
	if(m1 <3){
		printf("Reprovado");
	}else{
		printf("Exame");
	}
 }
return 0;	
}
