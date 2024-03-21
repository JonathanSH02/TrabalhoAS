#include<stdio.h>
#include<locale.h>
#include<string.h>

int opcao;

int TelaLogin(){

    char login[15] = "renata";
    char login1[15];
    char senha[15] = "123";
    char senha1[15];        
    int login_efetuado = 0;

    while(!login_efetuado){
        printf("Digite o Login: ");
        scanf("%s", login1);

        printf("Digite a Senha: ");
        scanf("%s", senha1);

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            printf("\n\nLOGADO!\n\n");
            login_efetuado = 1;
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");    
    }

}

int MostrarMenu(){

    printf("********************************************\n\n");
    printf("******SEJA BEM VINDO AO MENU PRINCIPAL******\n\n");
    printf("********************************************\n\n");

    printf("1) - INCLUIR CLIENTES\n");
    printf("2) - EXCLUIR DADOS\n");
    printf("3) - RELATORIO\n");
    printf("4) - SAIR DO SISTEMA\n\n");     
    printf("DIGITE A OPÇÃO DESEJADA: ");
    scanf("%d", &opcao);

    getchar();    

}

int main(){

    setlocale(LC_ALL, "Portuguese");

    TelaLogin();

    MostrarMenu();
    
    char dados[15];
    int senhanum;
	char login[15] = "renata";
	char senha[15] = "123";
	
        switch (opcao)

        {

            case 1 :

                printf("\n\nAdicione os dados do Cliente\n");
                scanf("%s",&dados);
                printf("\n\nAdicione a senha do Cliente\n");
                scanf("%d",&senhanum);

            break;

            case 2 : 

            break;
            
            case 3 :
            	
            	printf("\nRelatorio do cliente\n");
            	printf("seu login e:%s\n",&login);
            	printf("sua senha e:%s",&senha);
            	
            	break;
            	
            case 4 :
            	
            	break;

            default :

                printf("Opção Invalida!");

            break;    
        }

        getchar();



    return 0;
}
