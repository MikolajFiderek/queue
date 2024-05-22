#include <stdio.h>
#include "queue.h"

int queue[MAX];
int front = -1;
int rear = -1;

int czyPelna() {
    return (rear + 1) % MAX == front;
}

int czyPusta() {
    return front == -1;
}

void dodaj(int value) {
    if (czyPelna()) {
        printf("Kolejka jest pelna\n");
        return;
    }
    if (czyPusta()) {
        front = 0;
    }
    rear = (rear + 1) % MAX;
    queue[rear] = value;
    printf("%d dodano do kolejki\n", value);
}
int usun() {
    if (czyPusta()) {
        printf("Kolejka jest pusta\n");
        return -1;
    }
    int value = queue[front];
    if (front == rear) {
        front = rear = -1;  // Kolejka jest teraz pusta
    } else {
        front = (front + 1) % MAX;
    }
    return value;
}

int pierwszaWartosc() {
    if (czyPusta()) {
        printf("Kolejka jest pusta\n");
        return -1;
    }
    return queue[front];
}