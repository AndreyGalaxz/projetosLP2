
#include <stdio.h>

int main() {
    int idade; 
    printf("Informe sua idade: "); 
    scanf("%d", &idade);
    if(idade > 70) {
        printf("Voce é velho!! ");
    }
    else if(idade  > 21) {
        printf("Vai trabalhar vagabundo ");
    } else {
        printf("jovem, vai ser feliz");
    }

    return 0;
}   
