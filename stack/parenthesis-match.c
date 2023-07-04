#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack {
    int size;
    int Top;
    char *s; // with this problem we use char 
};

void create(struct Stack *st, int size) {
    // printf("Enter size of stack: \n");
    // scanf("%d", &st->size);
    st->size = size;
    st->s = (char *)malloc(st->size*sizeof(char));
    st->Top = -1;
}

void push(struct Stack* st, char x) {
    // push in stack mean : increase top value +1
    // add -> a value in
    // to check topology condition of stack
    if(st->Top==st->size-1)
        printf("Stack overflow\n");
    else {
        st->Top++;
        st->s[st->Top]=x;
    }
}

void pop(struct Stack* st) {
    int x = -1;
    if(st->Top==-1) {
        printf("Stack underflow \n\n");


    }
    else 
        st->Top--;
}

int isEmpty(struct Stack st) {
    return (st.Top==-1)?1:0;
}

int isBalance(char* exp) {
    struct Stack st;
    create(&st, strlen(exp));
    for(int i=0; exp[i]!='\0'; ++i) {
        // push when meet open bracket
        // pop when meet closing bracket
        if(exp[i]=='(') 
            push(&st, exp[i]);
        else if(exp[i]==')') {
            if(isEmpty(st)) return 0;
            pop(&st);
        }
    }
    return isEmpty(st)?1:0;
}

int main() {
    char a[]="(Hello))";
    // struct Stack t;
    // create(&t, strlen(a));
    if(isBalance(a))
        printf("Balance\n");
    else
        printf("Inbalanced!!\n");

    return 0;
}