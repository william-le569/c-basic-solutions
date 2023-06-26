#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
} * first = NULL;

//create a linked-list
void create(int A[], int n) {
    struct Node *t, *last;

    // Initial State
    first = (struct Node *)malloc( sizeof( struct Node )); // by doing this we create a pointer in stadck -> point to a location in heap memory
    first->data = A[0];
    first->next = NULL;
    
    last = first;

    // Next State
    for(int i=1; i<n; i++) {
        t = (struct Node *) malloc( sizeof( struct Node ) ); // Create a t pointer in stack -> point to a location in heap memory
        t->data = A[i];
        t->next = NULL;

        last->next = t;
        last = t;
    }
}

void display(struct Node *p) {
    while(p!=0) {
        printf("%d\n",p->data);
        p = p->next;
    }
}

int main() {

    int A[5] = {1, 3, 5, 7, 9};
    create(A,5);
    display(first);

    return 0;
}