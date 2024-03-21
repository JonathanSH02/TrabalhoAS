#include<stdio.h>

int soma(){
	
	int a, b, c;
	
	printf("Digite o numero:");
	scanf("%d",&b);
	
	printf("Digite o numero:");
	scanf("%d",&c);
	
	a=b+c;

}
int main(){
	
	int c;
	c = soma();
	printf("%d", c);
	
	return 0; 
}
