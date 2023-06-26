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
// step 1 inilize array
// step 2 loop through
// step 3  count frequency ::
//         :: create a smaller arrays contain any value -> ++freq[array[i]] to count -> Frequency Finding for Natural number 
// step 4 print out

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20000

int main() {
    srand( time( NULL ) );
    int array[2]={0};

    for( int i = 0; i < SIZE; i++) {
        int coin = rand() % 2;
        ++array[coin];
    }

    printf("\t%s\t%s\n","Value","Frequency");
    for( int i = 0; i < 2; i++ ) {
        printf("\t%d\t%d\n",i,array[i]);
    }

    return 0;
}