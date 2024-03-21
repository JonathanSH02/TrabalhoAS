#include <stdio.h>

float main(){

	float n1, n2, nf, af;
	
	do {
		printf("Digite a nota1:");
    	scanf("%f",&n1);
		
	}while(n1 < 0 || n1 >5);

	do {
		printf("Digite a nota2:");
    	scanf("%f",&n2);
		
	}while(n2 < 0 || n2 >5);
	
	nf = n1+ n2;
	
	if(nf >= 6 && nf <=10){
		
        printf("Aprovado");
    }else{
        do {
		printf("Digite a nota af:");
    	scanf("%f",&af);
		
	}while(af < 0 || af >5);
	
	if(n1 < n2){
		n1 = af;
	}else{
		n2=af;
	}
	
	nf = n1+ n2;
	
	if(nf >= 6 && nf <=10){
		
        printf("Aprovado");
    }else{
		printf("Reprovado");
    }
}
 return 0;
}
