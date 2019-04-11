#include <stdio.h>
/*
 * La fonction modification va mettre dans a le résultat du calcul a + b et dans b le résultat du calcul a * b.
 * Ecrivez uniquement la fonction modification.
 * Vous devez écrire la déclaration de la fonction ainsi que son code.
 * N'écrivez pas la fonction main, faites comme si elle était déjà écrite; votre code sera placé au dessus de la fonction main.
 */
void modification(int * a, int * b){
    int c = *a + *b;
    int d = *a * *b;
    *a = (int *) c;
    *b = (int *) d;
}

int main() {
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("avant modification a vaut %d et b vaut %d\n",a,b);
    modification(&a,&b);
    printf("apres modification a vaut %d et b vaut %d\n",a,b);
}
