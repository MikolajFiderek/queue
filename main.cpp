#include <stdio.h>
#include "queue.h"

int main() {

    int choice, value;
    do {
        printf("\n1. Dodaj liczbe do kolejki\n");
        printf("2. Usun wartosc z kolejki\n");
        printf("3. Koniec programu\n");
        printf("Wybierz opcje: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Podaj liczbe do dodania: ");
                scanf("%d", &value);
                dodaj(value);
                break;
            case 2:
                value = usun();
                if (value != -1)
                    printf("Usunieto wartosc: %d\n", value);
                break;
            case 3:
                printf("Koniec programu\n");
                break;
            default:
                printf("Niepoprawna opcja\n");
                break;
        }
    } while (choice != 3);

    return 0;
}