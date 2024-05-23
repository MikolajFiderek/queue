#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int *elements;
    int front;
    int rear;
    int size;
};

struct Queue *createQueue(int capacity) {
    struct Queue *queue = (struct Queue *) malloc(sizeof(struct Queue));
    if (!queue) {
        printf("Błąd alokacji pamięci\n");
        exit(1);
    }
    queue->elements = (int *) malloc(capacity * sizeof(int));
    if (!queue->elements) {
        printf("Błąd alokacji pamięci\n");
        exit(1);
    }
    queue->front = -1;
    queue->rear = -1;
    queue->size = capacity;
    return queue;
}

int czyPelna(struct Queue *queue) {
    return (queue->rear + 1) % queue->size == queue->front;
}

int czyPusta(struct Queue *queue) {
    return queue->front == -1;
}

void dodaj(struct Queue *queue, int value) {
    if (czyPelna(queue)) {
        printf("Kolejka jest pełna\n");
        return;
    }
    if (czyPusta(queue)) {
        queue->front = 0;
    }
    queue->rear = (queue->rear + 1) % queue->size;
    queue->elements[queue->rear] = value;
    printf("%d dodano do kolejki\n", value);
}

int usun(struct Queue *queue) {
    if (czyPusta(queue)) {
        printf("Kolejka jest pusta\n");
        return -1;
    }
    int value = queue->elements[queue->front];
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % queue->size;
    }
    return value;
}

int pierwszaWartosc(struct Queue *queue) {
    if (czyPusta(queue)) {
        printf("Kolejka jest pusta\n");
        return -1;
    }
    return queue->elements[queue->front];
}

void zwolnijKolejke(struct Queue *queue) {
    free(queue->elements);
    free(queue);
}

