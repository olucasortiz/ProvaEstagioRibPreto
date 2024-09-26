#include <string.h>
#include <stdio.h>


int main() {
    char string[25];
    int cont = 0;
    
    printf("digite uma string: \n");
    fflush(stdin);
    gets(string);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == 'a' || string[i] == 'A') {
            cont++;
        }
    }
    if (cont > 0)
		printf("A letra 'a' ou 'A' aparece %d vezes na string\n", cont);
    else printf("A letra 'a' não aparece na string.\n");
}

