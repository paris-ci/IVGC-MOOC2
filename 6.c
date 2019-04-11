#include <stdio.h>

/*
 * La fonction "affiche" affiche justement la valeur de l'entier lue en entrée.
 * Ecrivez uniquement la fonction affiche.
 * Vous devez écrire le contenu de la fonction affiche.
 * Vous devez écrire la déclaration de la fonction ainsi que son code.
 * N'écrivez pas la fonction main, faites comme si elle était déjà écrite; votre code sera placé au dessus de la fonction main.
 */

void affiche(int * b){
    printf("%d", *b);
}

int main(){
    int a;
    scanf("%d",&a);
    int * b = &a;
    affiche(b);
    return 0;
}
