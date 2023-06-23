#include <stdio.h>
//instructions : f in printf and scanf stands for formatted
//scanf: the function reads from the standard input, usually the keyboard.
// %d : convention specifier
// & : address operator, after it is a variable; tell the scanf where is the location to store the value of integer.
// coding style : place a space after "," to make program more readable.
// coding style : add comments after "}"
// coding style : the first letter of an identifier used as a simple variable name should be a lowercase letter.
int main() {
    int x = 0;

    printf("%s\t%s\t%s\n", "number", "square", "cube");
    printf("%d\t%d\t%d\n", x, x*x, x*x*x);
    x++;
    printf("%d\t%d\t%d\n", x, x*x, x*x*x);
    x++;
    printf("%d\t%d\t%d\n", x, x*x, x*x*x);
    x++;
    printf("%d\t%d\t%d\n", x, x*x, x*x*x);
    x++;
    printf("%d\t%d\t%d\n", x, x*x, x*x*x);
    x++;
    printf("%d\t%d\t%d\n", x, x*x, x*x*x);
    x++;
    printf("%d\t%d\t%d\n", x, x*x, x*x*x);
    x++;
    printf("%d\t%d\t%d\n", x, x*x, x*x*x);
    x++;
    printf("%d\t%d\t%d\n", x, x*x, x*x*x);
    x++;
    printf("%d\t%d\t%d\n", x, x*x, x*x*x);
    x++;
    printf("%d\t%d\t%d\n", x, x*x, x*x*x);
    // x++; redundant
} // end fucntion main