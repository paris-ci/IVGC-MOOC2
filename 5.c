#include <stdio.h>

/*
 * La fonction motsDeTroisLettres lit nbMots mots depuis l'entrée (chaque mot a 50 lettres maximum) et retourne le nombre de mots avec 3 lettres.
 * Ecrivez uniquement la fonction motsDeTroisLettres.
 * Vous devez écrire la déclaration de la fonction ainsi que son code.
 * N'écrivez pas la fonction main, faites comme si elle était déjà écrite; votre code sera placé au dessus de la fonction main.
 */

#include <string.h>

int motsDeTroisLettres(int nbMots) {
    int mots_trois_lettres = 0;
    char word[256];

    for (int i=0; i<nbMots; i++){
        scanf("%s", &word);
        if (strlen(word) == 3){
            mots_trois_lettres++;
        }
    }

    return mots_trois_lettres;
}


int main() {
    int nbMots = 0;
    scanf("%d", &nbMots);
    printf("Il y a %d mots avec 3 lettres\n", motsDeTroisLettres(nbMots));
}
