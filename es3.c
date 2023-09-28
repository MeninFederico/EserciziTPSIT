#include <stdio.h>

int main()
{
    int i=5;
    int arr[i];
    int sum=0;
    printf("Inserisci 5 numeri:\n");
    for(i=0;i<5;i++){
        scanf("%i", &arr[i]);
        sum+=arr[i];
    }
    float media=(sum/5);
    printf("La somma è %i e la media è %f", sum, media);
    return 0;
}