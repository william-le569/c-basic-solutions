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
    int sum, product, difference, quotient, remainder;

    printf("Enter the first integer\n");
    scanf("%d", &integer1);

    printf("Enter the second integer\n");
    scanf("%d", &integer2);

    sum = integer1 + integer2;
    product = integer1 * integer2;
    difference = integer1 - integer2;
    quotient = integer1 / integer2;
    remainder = integer1 % integer2;

    printf("Sum is %d\n", sum);
    printf("Product is %d\n", product);
    printf("Difference is %d\n", difference);
    printf("Quotient is %d\n", quotient);
    printf("Remainder is %d\n", remainder);
} // end fucntion main