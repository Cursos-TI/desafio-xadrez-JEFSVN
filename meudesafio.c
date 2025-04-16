#include <stdio.h>

int main() {
     int torre = 1, bispo = 1, rainha = 1;
    
    printf("TORRE\n");

    for (torre = 1; torre <= 5; torre++) {
        printf("%d direita\n", torre);
    }
      
    printf("**torre movida cinco casas para a direita**\n");
    
    printf("BISPO\n");

    while (bispo <= 5)
    {
        printf("%d cima,direita\n", bispo);
        bispo++;

    }

        printf("**Bispo movido cinco casas na diagonal**\n");
   
        printf("RAINHA\n");

        do
        {
            printf("%d esquerda\n", rainha);
            rainha++;

        } while (rainha <= 8);
         
        printf("**rainha movida oito casas para a esquerda");

    
    return 0;
}
