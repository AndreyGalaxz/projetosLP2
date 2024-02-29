#include <stdio.h>
 int main() {
    int idade;
    printf("sua idade: ");
    scanf("%d", &idade);
    switch (idade) { // da pra usar condicional 
    case 21 ... 70: // use 0 ou 1 como caso para valores da condicional 
        printf("adulto");
        break;

    case 1 ... 20:
        printf("jovem");
        break;

    default:
        printf("muito velho");
        break;
    }

 }