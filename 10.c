#include <stdio.h>
/*
 * La fonction "m3" prend comme paramètre un pointeur correspondant à l'adresse d'un tableau d'entiers, un entier et un indice. Elle retourne la valeur de la case du tableau passé en premier paramètre ayant pour indice celui passé en troisième paramètre mutlipliée par l'entier passé en deuxième paramètre.
 * Ecrivez uniquement la fonction m3.
 * Vous devez écrire le contenu de la fonction m3.
 * Vous devez écrire la déclaration de la fonction ainsi que son code.
 * N'écrivez pas la fonction main, faites comme si elle était déjà écrite; votre code sera placé au dessus de la fonction main.
 */

int m3(int * c, int b, int ind){
    return c[ind] * b;
}

int main(){
    int a[3];
    scanf("%d",&a[0]);
    scanf("%d",&a[1]);
    scanf("%d",&a[2]);
    int b;
    scanf("%d",&b);
    int *c = a;
    printf("%d%d%d",m3(c,b,0),m3(c,b,1),m3(c,b,2));
    return 0;
}
