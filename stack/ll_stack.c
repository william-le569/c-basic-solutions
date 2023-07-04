#include <stdio.h>
#include <stdlib.h>
// if i wanna create several stack
// 1> Create A Node structure -> create a Stack using Lindked list
// 2> Create A Strack structure
// 3> Write operation functions ::
//   :: 
//   ::
struct Node {
    int data;
    struct Node *next;
};


struct Stack {
    struct Node* top;
};

// creating a stack -> create a pointer
// create pointer in heap memory
// stack->top = NULL;

struct Stack* createStack() {
    // LHS::create a stack variable in stack memory acts as a pointer with data type is Stack
    // RHS:: Create a dynamical memory
    struct Stack* stack= (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}

// CONFUSE !!!!!!
void push(struct Stack* stack, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = stack->top; // why don't construct newNode->next = newNode
    stack->top = newNode;
}

int isEmpty(struct Stack stack) {
    return stack.top==NULL;
}

void Display(struct Stack stack) {
    if(isEmpty(stack)) {
        printf("The stack is empty!\n\n");
        return; // out of Display function
    }
    printf("Stack elements: ");
    struct Node* current = stack.top;
    while(current!=NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Stack* stack = createStack();
}
