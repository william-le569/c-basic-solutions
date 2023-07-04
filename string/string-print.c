
// Mathematical proof
// using State analysing :
// Init state :: init i =0; console=empty; c[0] = H
// Condition check :: 
// Next State : If condition is true :: i' = i + 1; console' = 'H'; c[i]' = c[i+1]
//              else :: i' = i; console'=terminated ; c[i]' = terminated
#include <stdio.h>

int main() {
    // char c[6]={'H', 'E', 'L', 'L', 'O', '\0'};
    char c[] = "HELLO";
    for(int i=0;c[i]!='\0'; ++i) {
        printf("%c",c[i]);
    }
    return 0;
}