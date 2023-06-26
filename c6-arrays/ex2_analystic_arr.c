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
#define SIZE 99
#define FREQ 10


int main() {

    // intialize an array
    unsigned int array[SIZE] = 
    { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
    7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
    6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
    7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
    6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
    7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
    5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
    7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
    7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
    4, 5, 6, 1, 6, 5, 7, 8, 7 };

    unsigned int freq[FREQ];

    for(int i=0; i<FREQ; i++) {
    
        freq[i]=0;
    }

    for(int i=0; i<SIZE; i++) {
        ++freq[array[i]];        
    }
    // draw a analystic table
    printf("\t%s\t%s\t%s\n","Value","Frequency","Histogram");
    for(int i=0; i<FREQ; i++) {
        printf("\t%d\t%d\t\t",i,freq[i]);
        for(int j=1;j<=freq[i];j++) {
            printf("*");
        }
        puts("");
    }


    return 0;

}
