// Ex1 : define a structure for a stack
// What should a stack look like ?
// You wanna a dynamically create a stack -> use a pointer
#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int size;
    int Top;
    int *s;
};

void create(struct Stack *st) {
    // construct the initial state of stack
    printf("Enter size of stack:");
    scanf("%d", &st->size);
    st->s  = (int*)malloc(st->size*sizeof(int));
    st->Top = -1;
}

void Display(struct Stack st) {
    for(int i=st.Top; i>=0; --i) // top-down display
        printf("%d ", st.s[i]);
    printf("\n");
}

void push(struct Stack *st, int x) {
    if(st->Top==st->size-1)
        printf("Stack overflow\n");
    else {
        st->Top++;
        st->s[st->Top]=x;
    }
}

int pop(struct Stack *st) {
    int x=-1;

    if(st->Top==-1) {
        printf("Stack Underflow\n");
    }
    else {
        x=st->s[st->Top--];
    }
    return x;
}

int main() {
    // stack declaration
    struct Stack st; 
    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);

    Display(st);
    return 0;
}