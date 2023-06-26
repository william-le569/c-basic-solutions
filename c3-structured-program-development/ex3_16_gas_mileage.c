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

// --------top-down and stepwise refinement analyse--------------

// initialize variables :: 
//      :: initialize sentinel variable ( control variable) <- gallon used, miles driven, miles/gallon for tank 
//      :: initilize : counter = 1;
//      :: initialize : sum and average = 0;
// input miles driven and gallons used for tankful ::
//      :: indefinite while loop : to check gallon-used variable != -1
//      :: input miles driven 
// calculate miles per gallon for each tankful and ouput ::
//      :: calculate miles per gallon
//      :: print the output

//---------------------------------------------------o
// -> Basic problems : One-input-one-output problem. ||
//---------------------------------------------------o
int main() {
    double gallons;
    double miles;
    double mpg;

    double sum = 0;
    double average = 0;
    int counter = 0;
    


    printf("Enter the gallons used (-1 to end): ");
    scanf("%lf", &gallons);

    while ( gallons != -1 )
    {
        printf("Enter the miles driven: ");
        scanf("%lf", &miles);
        mpg = miles/gallons;
        sum = sum + mpg;
        counter++;
        printf("%s%lf","The miles/gallon for this tank was ", mpg);

        printf("\n\nEnter the gallons used (-1 to end): ");
        scanf("%lf", &gallons);

    } // end while
    average = sum / (double)counter;
    printf("\n%s%lf\n","The overall average miles/gallon was ", average);
    // printf("\n%s%d\n","debug : counter ", counter);
} // end fucntion main