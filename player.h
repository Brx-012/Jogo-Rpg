#ifndef PLAYER_H
#define PLAYER_H

typedef struct {
    char nome[50];
    int hp;
    int defesa;
    int dano;
} Player;

void mostrarStatus(Player p);

#endif
