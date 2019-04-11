#include <stdio.h>
/*
 * La fonction dansLaCase(i,ptr) renvoie la valeur dans la case i du tableau pointé par ptr.
 * Ecrivez uniquement la fonction dansLaCase.
 * Vous devez écrire la déclaration de la fonction ainsi que son code.
 * N'écrivez pas la fonction main, faites comme si elle était déjà écrite; votre code sera placé au dessus de la fonction main.
 */
int dansLaCase(int i, int * ptrtab){
    return ptrtab [i];
}

int main() {
    int tab[12] = {2,4,8,19,22,99,23,44,31,23,45,23};
    int i = 0;
    int * ptr = tab;
    scanf("%d", &i);
    printf("la case %d contient %d", i, dansLaCase(i,ptr));
}