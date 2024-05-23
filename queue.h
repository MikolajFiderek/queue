#ifndef QUEUE_H
#define QUEUE_H

struct Queue;

struct Queue* createQueue(int capacity);

int czyPelna(struct Queue *queue);

int czyPusta(struct Queue *queue);

void dodaj(struct Queue *queue, int value);

int usun(struct Queue *queue);

int pierwszaWartosc(struct Queue *queue);

void zwolnijKolejke(struct Queue *queue);

#endif