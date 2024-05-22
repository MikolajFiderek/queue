#include <stdio.h>
#include "queue.h"

int main() {

    int choice, value;
    do {
        printf("\n1. Dodaj liczbe do kolejki\n");
        printf("2. Koniec programu\n");
        printf("Wybierz opcje: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Podaj liczbe do dodania: ");
                scanf("%d", &value);
                dodaj(value);
                break;
            case 2:
                printf("Koniec programu\n");
                break;
            default:
                printf("Niepoprawna opcja\n");
                break;
        }
    } while (choice != 2);

    return 0;
}