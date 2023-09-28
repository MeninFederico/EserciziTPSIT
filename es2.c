#include <stdio.h>
int conversione(int o, int m, int s)
{
    int sum=s;
    sum+=(m*60);
    sum+=(o*3600);
    return sum;
}

int main()
{
    printf("Inserisci il primo tempo (ore, minuti, secondi):\n");
    int a, b, c;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    printf("Inserisci il secondo tempo (ore, minuti, secondi):\n");
    int x, y, z;
    scanf("%i", &x);
    scanf("%i", &y);
    scanf("%i", &z);
    if(conversione(a, b, c)>conversione(x, y, z)){
        printf("La prima sequenza è maggiore.");
    }
    else if(conversione(a, b, c)==conversione(x, y, z)){
        printf("Le sequenze sono uguali.");
    }
    else{
        printf("La seconda sequenza è maggiore.");
    }

}