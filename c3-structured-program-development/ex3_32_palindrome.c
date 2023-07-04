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
#include <stdio.h>

int isPalinedrome(int n) {
    int a,b;
    a = n % 100;
    b = n / 1000;
    if((a+b)%11==0)
        return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    if(isPalinedrome(n)) {
        printf("%d%s\n",n,"is a Palinedrome number!");
    }
    else
        printf("%d%s\n",n,"is not a Palinedrome number");
} // end fucntion main