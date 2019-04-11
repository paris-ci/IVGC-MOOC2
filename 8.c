#include <stdio.h>

/*
 * La fonction affiche va afficher les valeurs lues par le scanf, séparées par un espace.
 * Ecrivez uniquement la fonction affiche.
 * Vous devez écrire la déclaration de la fonction ainsi que son code.
 * N'écrivez pas la fonction main, faites comme si elle était déjà écrite; votre code sera placé au dessus de la fonction main.
 */
void affiche(int ** ptrs){
    printf("%d %d %d %d %d", *ptrs[0], *ptrs[1], *ptrs[2], *ptrs[3], *ptrs[4]);
}

int main() {
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int * pointeurs[5];
    pointeurs[0] = &a;
    pointeurs[1] = &b;
    pointeurs[2] = &c;
    pointeurs[3] = &d;
    pointeurs[4] = &e;
    affiche(pointeurs);
}