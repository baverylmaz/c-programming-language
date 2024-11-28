#include <stdio.h>
#include <stdlib.h>
#define MAX 5 // Kuyruğun maksimum boyutu

// Kuyruk yapısını tanımlıyoruz
struct Queue {
    int items[MAX];
    int front, rear;
};

// Queue oluşturma fonksiyonu
struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = -1;
    q->rear = -1;
    return q;
}

// Kuyruğun boş olup olmadığını kontrol eder
int isEmpty(struct Queue* q) {
    return (q->front == -1);
}

// Kuyruğun dolu olup olmadığını kontrol eder
int isFull(struct Queue* q) {
    return (q->rear == MAX - 1);
}

// Kuyruğa eleman ekleme işlemi
void enqueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full\n");
    } else {
        if (q->front == -1) // İlk eleman ekleniyorsa front'u sıfır yap
            q->front = 0;
        q->rear++;
        q->items[q->rear] = value;
        printf("Inserted %d\n", value);
    }
}

// Kuyruktan eleman çıkarma işlemi
void dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        printf("Removed %d\n", q->items[q->front]);
        q->front++;
        // Tüm elemanlar çıkarıldığında kuyruğu sıfırla
        if (q->front > q->rear) {
            q->front = q->rear = -1;
        }
    }
}

// Kuyruğun önündeki elemanı döndürme işlemi
int peek(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->items[q->front];
}

// Kuyruk yapısının belleğini temizleme
void freeQueue(struct Queue* q) {
    free(q);
}

int main() {
    struct Queue* q = createQueue();

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);

    printf("Front element is: %d\n", peek(q)); // 10

    dequeue(q);
    printf("Front element after one dequeue: %d\n", peek(q)); // 20

    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q); // Tüm elemanlar çıkarılıyor

    printf("Is queue empty? %s\n", isEmpty(q) ? "Yes" : "No"); // Yes

    freeQueue(q); // Belleği temizle

    return 0;
}
