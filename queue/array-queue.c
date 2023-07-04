
#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int size;
    int front;
    int Rear;
    int *Q; // a Pointer to an array
};

// Step 1 : remind the Queue topology
//        :: remember to deal with those logic topologies -> the very important point is to check Topology condition
//        :: The important is to remember rules of topology
// Step 2 : to enqueue => increase REar index -> add value at Rear position.
void enqueue(struct Queue *q, int x) {
    if(q->Rear == q->size-1) 
        printf("Queue is full");
    else {
        ++q->Rear;
        q->Q[q->Rear] = x;
    }
}

// What you can think how dequeue do
// Check topology condition in which condition dequeue cannot be executed
// When the queue is empty -> Topology condition for empty when Rear = -1
// which the 2 pointer queue topology :: fron == rear
// 
void dequeue(struct Queue *q) {
    int x=-1;
    if(q->front == q->Rear) 
        printf("Queue is empty");
    else {
        q->front++;
        x=q->Q[q->front];
    }
}

int main() {
    struct Queue q;
    printf("Enter the size :");
    scanf("%d",&q.size);
    // create an array in heap memory
    q.Q = (int *)malloc(sizeof(int)*q.size);
    q.front = q.Rear = -1;

}