#include<stdio.h>

float main(){
    
    float n1, n2,nf;
    
    printf("Digite a nota:");
    scanf("%f",&n1);
    
    printf("Digite a nota:");
    scanf("%f",&n2);
    
    nf = (n1+n2)/2;
    
    if(nf >= 6 && nf <=10){
        printf("Aprovado");
    }else if(nf > 10){
    	printf("ERRO");
	}else{
        printf("Reprovado");
        printf(" com %.2f", nf);
    }
    
    return 0;
    
}
