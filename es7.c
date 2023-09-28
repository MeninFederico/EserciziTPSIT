#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int arr[10];
    srand(time(NULL));
    for(int i=0;i<10;i++){
        int r = rand()%30+1;
        for(int k=0;k<i;k++){
            if(r==arr[k]){
                r = rand()%30+1;
                arr[i]=r;
            }
        }
        arr[i]=r;
        printf("%i\t", arr[i]);
    }
    int x=0;
    int *p = &x;
    int flag=false;
    printf("\nChe numero vuoi cercare? Da 1 a 30\n");
    scanf("%i", &x);
    for(int i=0;i<10;i++){
        if(*p == *(arr+i)){
            printf("\nIl numero %i è presente nell'array in posizione %i", *p, (++i));
            flag=1;
        }
    }
    if(!flag){
        printf("\nIl numero non è presente");
    }
    return 0;
}