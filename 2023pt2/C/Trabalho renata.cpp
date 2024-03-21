#include <stdio.h>
#include <string.h>

#define MAX_USUARIOS 10

struct Usuario {
    char email[50];
    char senha[50];
};

int fazerLogin(struct Usuario usuarios[], int numUsuarios) {
    char email[50];
    char senha[50];

    printf("Digite seu email: ");
    scanf("%s", email);
    printf("Digite sua senha: ");
    scanf("%s", senha);

    for (int i = 0; i < numUsuarios; i++) {
        if (strcmp(email, usuarios[i].email) == 0 && strcmp(senha, usuarios[i].senha) == 0) {
            printf("Login bem-sucedido!\n");
            return 1;
        }
    }

    printf("Login falhou. Email ou senha incorretos.\n");
    return 0; 
}

int incluirUsuario(struct Usuario usuarios[], int numUsuarios) {
    if (numUsuarios >= MAX_USUARIOS) {
        printf("Nao e possível adicionar mais usuarios. Limite atingido.\n");
        return numUsuarios;
    }

    printf("Digite o novo email: ");
    scanf("%s", usuarios[numUsuarios].email);
    printf("Digite a nova senha: ");
    scanf("%s", usuarios[numUsuarios].senha);

    printf("Usuario adicionado com sucesso!\n\n");
    return numUsuarios + 1;
}


void exibirRelatorio(struct Usuario usuarios[], int numUsuarios) {
    printf("Relatorio de Usuarios:\n");
    for (int i = 0; i < numUsuarios; i++) {
        printf("Usuario %d:\n", i + 1);
        printf("Email: %s\n", usuarios[i].email);
        printf("Senha: %s\n\n", usuarios[i].senha);
    }
}

int main() {
    struct Usuario usuarios[MAX_USUARIOS];
    int numUsuarios = 0;
    int opcao;

    do {
        printf("Menu Principal:\n");
        printf("1. Login\n");
        printf("2. Incluir Usuario\n");
        printf("3. Excluir Usuario\n");
        printf("4. Relatorio de Usuarios\n");
        printf("5. Sair\n\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (fazerLogin(usuarios, numUsuarios)) {
                    printf("Voce esta logado. \n\n");
                }
                break;
            case 2:
                numUsuarios = incluirUsuario(usuarios, numUsuarios);
                break;
            case 3:
                printf("Funcao de exclusao nao implementada.\n");
                break;            
			case 4:
                exibirRelatorio(usuarios, numUsuarios);
                printf("\n");
                break;
            case 5:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
