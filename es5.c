#include <stdio.h>

int main()
{
    int uno[5];
    int due[5];
    printf("Inserisci gli elementi del primo array:\n");
    for(int i=0;i<5;i++){
        scanf("%i", &uno[i]);
    }
    printf("Inserisci gli elementi del secondo array:\n");
    for(int i=0;i<5;i++){
        scanf("%i", &due[i]);
    }
    int final[10];
    for(int i=0;i<5;i++){
        final[i]=uno[i];
    }
    for(int i=0;i<5;i++){
        final[i+5]=due[i];
    }
    for(int i=0;i<10;i++){
        printf("%i ", final[i]);
    }
    return 0;
}
