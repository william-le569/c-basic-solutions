#include <stdio.h>
//instructions : f in printf and scanf stands for formatted
//scanf: the function reads from the standard input, usually the keyboard.
// %d : convention specifier
// & : address operator, after it is a variable; tell the scanf where is the location to store the value of integer.
// coding style : place a space after "," to make program more readable.
// coding style : add comments after "}"
// coding style : the first letter of an identifier used as a simple variable name should be a lowercase letter.
int main() {
    int integer1;
    int integer2;
    int sum;

    printf("Enter the first integer\n");
    scanf("%d", &integer1);

    printf("Enter the second integer\n");
    scanf("%d", &integer2);

    sum = integer1 + integer2;

    printf("Sum is %d\n", sum);
} // end fucntion main