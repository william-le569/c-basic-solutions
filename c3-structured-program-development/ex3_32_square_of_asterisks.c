//instructions : f in printf and scanf stands for formatted
//scanf: the function reads from the standard input, usually the keyboard.
// %d : convention specifier
// & : address operator, after it is a variable; tell the scanf where is the location to store the value of integer.
// coding style : place a space after "," to make program more readable.
// coding style : add comments after "}"
// coding style : the first letter of an identifier used as a simple variable name should be a lowercase letter.

//  update for chapter 3 :
// sentinel : sentinel value must be chosen so that it cannot be confused with an acceptable input value.
// using top-down, Stepwise refinement to solve problems

// input : read side of square ::
//      :: cin > size
// output print that square out
// condition side between 1 and 20

#include <stdio.h>

int main() {
    int s;
    int i=0;
    int j=0;
    scanf("%d",&s);
    while(i<s) {
        while(j<s) {
            printf("%s","*");
            j++;
        }
        printf("\n");
        j=0; // restart state of j
        i++;
    } 
    j=0;

    return 0;
}