#ifndef Queue_h
#define Queue_h

struct Node {
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Queue
{
    int size;
    int front;
    int rear;
    // int *Q;
    struct Node **Q; //*Q is pointer for array Node * : is a pointer type Node
};

void create(struct Queue *q, int size) {
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (struct Node **)malloc(q->size*sizeof(struct Node *));
}

// enqueue : Insert in the last position
void enqueue(struct Queue *q,struct Node * x) {
    if((q->rear+1)%q->size == q->front)
        printf("Queue is Full");
    else
    {
        q->rear = (q->rear+1) % q->size;
        q->Q[q->rear] = x;
    }
}

// dequeue : Delete in the first position
struct Node * dequeue(struct Queue *q) {
    struct Node * x = NULL;

    if(q->front == q->rear)
        printf("Queue is empty\n");
    else {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}

int isEmpty(struct Queue q) {
    return q.front == q.rear;
}

#endif