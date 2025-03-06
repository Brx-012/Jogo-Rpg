#include <stdio.h>
#include "player.h"

void mostrarStatus(Player p) {
    printf("\n=== Informações do Personagem ===\n");
    printf("Nome: %s\nVida: %d\nDefesa: %d\nDano: %d\n",
           p.nome, p.hp, p.defesa, p.dano);
}
