#include <stdio.h>
//instructions : f in printf and scanf stands for formatted
//scanf: the function reads from the standard input, usually the keyboard.
// %d : convention specifier
// & : address operator, after it is a variable; tell the scanf where is the location to store the value of integer.
// coding style : place a space after "," to make program more readable.
// coding style : add comments after "}"
// coding style : the first letter of an identifier used as a simple variable name should be a lowercase letter.
int main() {
    unsigned int counter;
    int grade;
    int total;
    int average;
    
    // intitialization phase
    total = 0;
    counter = 1;

    // processing phase
    while ( counter <= 10 ) {
        printf( "%s", "Enter grade: ");
        scanf( "%d", &grade );
        total = total + grade ;
        counter = counter + 1;
    } // end while

    // termination phase
    average = total / 10;
    printf( "Class average is %d\n", average); // display result

} // end fucntion main