/*
 * La fonction f retourne la valeur passée en paramètre multipliée par trois et incrémentée de 1.
 * Ecrivez uniquement la fonction f.
 * Vous devez écrire la déclaration de la fonction ainsi que son code.
 * N'écrivez pas la fonction main, faites comme si elle était déjà écrite; votre code sera placé au dessus de la fonction main.
 */

#include <stdio.h>

//

int f(int x){
    return x*3 + 1;
}

//

int main() {
    int x;
    scanf("%d", &x);
    int y = f(x);
    printf("%d", y);
}

