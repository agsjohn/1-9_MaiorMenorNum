#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, num, maior, menor;
    for(x = 1; x <= 5; x = x + 1){
        printf("Digite o %iº número: ", x);
        scanf("%i", &num);
        if(x == 1){
            maior = num;
            menor = num;
        }
        if(maior < num){
            maior = num;
        }
        if(menor > num){
            menor = num;
        }
    }
    getchar();
    printf("\nMaior número digitado: %i \nMenor número digitado: %i", maior, menor);
    getchar();
}
