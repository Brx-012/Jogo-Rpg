#include <stdio.h>
#include "battle.h"

int calcularDano(int danoOriginal, int defesa) {
    return (danoOriginal * 100) / (100 + defesa);
}

void SistemadeBatalha(Player *jogador, Player *inimigo) {
    printf("\n--- Iniciando a Batalha! ---\n");

    mostrarStatus(*jogador);
    mostrarStatus(*inimigo);

    while (jogador->hp > 0 && inimigo->hp > 0) {
        printf("\nSua vez! Escolha uma ação:\n[1] Atacar\n[2] Fugir\nEscolha: ");
        int escolha;
        scanf("%d", &escolha);

        if (escolha == 1) {
            int danoReal = calcularDano(jogador->dano, inimigo->defesa);
            inimigo->hp -= danoReal;
            printf("%s atacou %s e causou %d de dano!\n", jogador->nome, inimigo->nome, danoReal);
        } else {
            printf("%s fugiu da batalha!\n", jogador->nome);
            return;
        }

        if (inimigo->hp <= 0) {
            printf("\n%s venceu a batalha!\n", jogador->nome);
            return;
        }

        int danoReal = calcularDano(inimigo->dano, jogador->defesa);
        jogador->hp -= danoReal;

        printf("%s atacou %s e causou %d de dano!\n", inimigo->nome, jogador->nome, danoReal);

        if (jogador->hp <= 0) {
            printf("\n%s venceu a batalha!\n", inimigo->nome);
            return;
        }
    }
}
