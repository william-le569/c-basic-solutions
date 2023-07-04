// A : 65 - O : 79 - E : 69 - U : 85 - I : 49

#include <stdio.h>

int main() {

    char A[] = "How are you";
    int vcount = 0, ccount = 0;

    for(int i=0; A[i]!='\0'; ++i) {
        if(A[i] == 65 || A[i] == 79 || A[i] == 69 || A[i] == 85 || A[i] == 73 || A[i] == 'a' || A[i] == 'o' || A[i] == 'e' || A[i] == 'u' || A[i] =='i')
            ++vcount;
        else if((A[i] >= 'A' && A[i] <= 'Z')||(A[i] >= 'a' && A[i] <= 'z'))
            ++ccount; 
    }
    printf("\n%d\t%d", vcount, ccount);
    return 0;
}