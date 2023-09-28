#include <stdio.h>

int main()
{
    int arr[50];
    printf("Inserisci quanti numeri vuoi:\n");
    for(int i=0;i<100;i++){
        scanf("%i", &arr[i]);
        if(arr[-1]==0&&arr[0]==0){
            continue;
        }
        if(arr[i]==arr[i-1]){
            return 1;
        }
    }
    return 0;
}
