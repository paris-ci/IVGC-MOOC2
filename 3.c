#include <stdio.h>

/*
 * La fonction plusgrand retourne la plus grande des deux valeurs passées en paramètre.
 * Ecrivez uniquement la fonction plusgrand. On fait l'hypothèse que a et b ne seront jamais égaux.
 * Vous devez écrire la déclaration de la fonction ainsi que son code.
 * N'écrivez pas la fonction main, faites comme si elle était déjà écrite; votre code sera placé au dessus de la fonction main.
 */

int plusgrand(int a, int b){
    return ((a) > (b) ? (a) : (b));
}

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", plusgrand(a,b));
}