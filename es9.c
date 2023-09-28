#include <stdio.h>

int main() {
    char str[20];
    printf("Inserisci la prima stringa: ");
    scanf("%s", str);
    char *p = str;
    int i=0;
    for(i=0;*p!='\0';i++){
        p++;
    }
    printf("\nLa stringa è lunga %i caratteri", i);
    return 0;
}
