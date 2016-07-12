#include <stdio.h>
#include <stdlib.h>

int main()
{
    int raggio;
    float circonferenza;

    printf("Inserisci la misura del raggio: ");
    scanf("%d", &raggio);

    if(raggio>=0)
    {
    circonferenza= 2*raggio*3.14;
    printf("La circonferenza e'uguale a %f", circonferenza);
    }
    else
    {
        printf("Il raggio deve essere positivo");
    }
    return 0;
}
