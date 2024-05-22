#include <stdio.h>
#include "queue.h"

int main() {

    int choice, value;
    do {
        printf("\n1. Dodaj liczbe do kolejki\n");
        printf("2. Usun wartosc z kolejki\n");
        printf("3. Sprawdz pierwsza wartosc z kolejki\n");
        printf("4. Sprawdz czy kolejka jest pusta\n");
        printf("5. Sprawdz czy kolejka jest pelna\n");
        printf("6. Koniec programu\n");
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
                value = pierwszaWartosc();
                if (value != -1)
                    printf("Pierwsza wartosc w kolejce: %d\n", value);
                break;
            case 4:
                if (czyPusta())
                    printf("Kolejka jest pusta\n");
                else
                    printf("Kolejka nie jest pusta\n");
                break;
            case 5:
                if (czyPelna())
                    printf("Kolejka jest pelna\n");
                else
                    printf("Kolejka nie jest pelna\n");
                break;
            case 6:
                printf("Koniec programu\n");
                break;
            default:
                printf("Niepoprawna opcja\n");
                break;
        }
    } while (choice != 6);

    return 0;
}