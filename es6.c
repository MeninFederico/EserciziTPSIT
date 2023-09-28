#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int arr[10];
    srand(time(NULL));
    for(int i=0;i<10;i++){
        int r = rand()%90+1;
    for(int k=0;k<i;k++){
        if(r==arr[k]){
            r = rand()%90+1;
            arr[i]=r;
        }
    }
        arr[i]=r;
        printf("%i\t", arr[i]);
    }
    return 0;
}
