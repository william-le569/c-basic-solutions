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

// top-down, stepwise refinement analysis
// intialize ::
//      :: a counter from 0 to 10
//      :: an input value
//      :: 2 largest number is assigned to a smallest number of non-negative type
// compare between numbers
//      :: input value < largest 2 so value < largest 1 -> don't do 
//      :: input value >= largest 2 && input value =< largest 1 -> largest 2 = input value ( the equal sign )
//      :: input value > largest 1 : -> largest 1 = input value & largest 2 = largest 1
// print out 2 largest number
int main() {
    
    int num;

    int i = 1 ;
    int largest1 =  0;
    int largest2 = 0;

    while(i <= 10) {
        // printf("%d\n",i);
        // printf("%s%ld","size of integer",sizeof(int));
        printf("\n%d.%s",i,"Enter the number : ");
        scanf("%d", &num);
        if ( num >= largest2 && num <= largest1 ) {
            largest2 = num;
        }
        else if ( num > largest1 ) {
            largest2 = largest1;
            largest1 = num; 
        }
        i++;
    }
    printf("\n%s%d","The first largest number is :", largest1);
    printf("\n%s%d\n","The second largest number is :", largest2);
} // end fucntion main