#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// Estrutura que armazena informações de um território: nome, cor do exército e número de tropas
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio territorios[5];

    // Cadastro dos territórios
    for (int i = 0; i < 5; i++) {
        printf("\n--- Cadastro do Território %d ---\n", i + 1);

        // Entrada do nome
        printf("Digite o nome do território: ");
        scanf("%s", territorios[i].nome);  // %s para string

        // Entrada da cor
        printf("Digite a cor do exército: ");
        scanf("%s", territorios[i].cor);

        // Entrada das tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados
    printf("\n=== Territórios Cadastrados ===\n");
    for (int i = 0; i < 5; i++) {
        printf("\nTerritório %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);  // %s para string
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}

