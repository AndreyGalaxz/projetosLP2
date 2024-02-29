#include <stdio.h>

int main()
{
    int escolha;
    printf("1: atividade da idade (sem o switch case)\n2: atividade do maior numero\n3: atividade da idade (com switch case)\n:");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        printf("atividade da idade (sem case)\n");

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

        break;
    case 2:
        printf("atividade do maior numero\n");

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
        break;

    case 3:
        printf("atividade da idade com switch\n");

        int idadeC;
        printf("sua idade: ");
        scanf("%d", &idadeC);
        switch (idadeC) { // da pra usar condicional 
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
        break;

    default:
        printf("atividade não encontrada!");
        break;
    }

 return 0;   
}
