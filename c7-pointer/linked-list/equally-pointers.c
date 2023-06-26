#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *first = NULL; // this is the init state of first -> NULL pointer

// struct Node *last = NULL;

void create(int A[], int size) {
    // Init state:
    struct Node *last, *t;
    
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;

    last = first;

    printf("%s%d%s%p%s%p%s%p\n","The value of first node:", first->data," The address of first node ", first, " The address that first node points to ", first->next, "The address of first node in stack memory ",&first);
    printf("%s%d%s%p%s%p%s%p\n","The value of last node:", last->data," The address of last node ", last, " The address that last node points to ", last->next, "The address of last node in stack memory ",&last);


}

int main() {
    int A[1]={5};
    create(A, 1);

   
    return 0;
}