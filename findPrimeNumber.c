/* 
* create function to find prime number
*/

#include <stdio.h>
// this flag use to refer to if number prime or not
int isPrimeNumber( int number );

int main () {
    isPrimeNumber(3);
}

int isPrimeNumber( int number ) { 

    int isPrimeNumber = 1;

    for ( int divider = 2; divider <= number/2; divider++ ) {

        if ( number % divider == 0 ) {
            isPrimeNumber = 0;
        }

    }
    isPrimeNumber ? printf("%d is prime number \n", number) : printf("%d is not prime number \n", number);
    return isPrimeNumber;
}