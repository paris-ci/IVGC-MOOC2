#include <stdio.h>

/*
 * La fonction lireEntier va lire un entier avec scanf et va retourner la valeur de cet entier.
 * Ecrivez uniquement la fonction lireEntier.
 * Vous devez écrire la déclaration de la fonction ainsi que son code.
 * N'écrivez pas la fonction main, faites comme si elle était déjà écrite; votre code sera placé au dessus de la fonction main.
 */

int lireEntier(){
    int x;
    scanf("%d", &x);
    return x;
}

int main() {
    int entierLu = lireEntier();
    printf("%d",entierLu);
}
