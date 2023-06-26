#include <stdio.h>
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

//  pseudocode : 
// reading an in-file-array
// initialize an array
// loop through
// print out
int main() {
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    printf("\t%s\t%s\n","Order","Value");
    for(int i=0; i<10; i++) {
        printf("\t%d.\t%d\n",i,array[i]);
    }
} // end fucntion main