#include <stdio.h>

/*
 * La fonction lesTroisPlusPetits lit 30 valeurs en entrée (comprises entre 0 et 100 et toutes différentes) et va afficher les 3 valeurs les plus petites, séparées par un espace et classées dans l'ordre croissant.
 * Vous devez écrire la déclaration de la fonction ainsi que son code.
 * N'écrivez pas la fonction main, faites comme si elle était déjà écrite; votre code sera placé au dessus de la fonction main.
 */

void lesTroisPlusPetits() {
    int a = 100; //plus petite
    int b = 100;
    int c = 100; //plus grande

    int x;
    for (int i=0; i<30; i++){
        scanf("%d", &x);
        if (x<a){
            c = b;
            b = a;
            a = x;
        }
        else if (x<b){
            c = b;
            b = x;
        }
        else if (x<c){
            c = x;
        }
    }

    printf("%d %d %d", a, b, c);
}

int main() {
    lesTroisPlusPetits();
}