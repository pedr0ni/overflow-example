#include <stdio.h>
#include <stdlib.h>

void echo() {

    char buffer[10];

    printf("Digite algum texto...\n");
    gets(buffer);
    printf("Voce digitou %s\n", buffer);

}

int main() {

    echo();

    return 0;
}