#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Inserire i 3 lati del triangolo con lunghezza crescente:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if((a*a)+(b*b)==(c*c)){
        printf("Il triangolo è rettangolo");
    }
    else{
        printf("Il triangolo NON è rettangolo");
    }
    return 0;
}


