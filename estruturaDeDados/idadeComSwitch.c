#include <stdio.h>
 int main() {
    int idade;
    printf("sua idade: ");
    scanf("%d", &idade);
    switch (idade) {
    case 21 ... 70:
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