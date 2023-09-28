#include <stdio.h>

int main() {
    int lunghezza;
    printf("Inserisci la lunghezza dell'array: ");
    scanf("%d", &lunghezza);
    int arr[lunghezza];
    printf("Inserisci gli elementi dell'array:\n");
    for (int i=0;i<lunghezza;i++) {
        printf("Elemento %i: ", i + 1);
        scanf("%i", arr + i);
    }
    int somma = 0;
    int *p = arr;
    for (int i = 0; i < lunghezza; i++) {
        somma += *p;
        p++;
    }
    printf("La somma degli elementi dell'array è: %i\n", somma);
    return 0;
}
