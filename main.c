#include <stdio.h>
#include "player.h"
#include "battle.h"

int main() {
    int opcao;

    Player jogador = {"Herói", 100, 20, 25};
    Player inimigo = {"Goblin", 80, 10, 15};

    printf("\n=== Criando um Sistema de Batalha em Turnos ===\n");
    do {
        printf("\nMenu Principal\n[1] Ver Personagem\n[2] Ver Inimigo\n[3] Iniciar Batalha\n[4] Sair\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                mostrarStatus(jogador);
                break;
            case 2:
                mostrarStatus(inimigo);
                break;
            case 3:
                SistemadeBatalha(&jogador, &inimigo);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
