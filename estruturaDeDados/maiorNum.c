#include <stdio.h>

int main() {
    int a;
    int b;
    int c; 

    printf("digite o primeiro numero: ");
    scanf("%d", &a);

    printf("digite o segundo: ");
    scanf("%d", &b);
    
    printf("digite o terceiro: ");
    scanf("%d", &c);
    
    int resultado;
    if(a>b) {
        if(a>c) {
            resultado = a;
            
        } else {
            resultado = c;
        }


    } else if(b>c) {
        resultado = b;
    } else {
        resultado = c;  
    }
    printf("o maior numero é -- %d --", resultado);

}
// switch case 