//  PrimeNumber
//
//  Created by David Rossy on 04.04.19.
//  Copyright © 2019 David_Rossy. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

//Prototypes
int PrimeRecursive(int n, int d);

int main(int argc, const char * argv[]) {

    int n = 0;

    //Title
    printf("OPTIMUS PRIME ?\n");
    printf("===============\n\n");
    
    //Tests (soon)
    // 0 1 2, any, negative number
    
    //Ask a number to user
    printf("Prime property of N = ");
    scanf("%i", &n);
    
    //Test if n is prime
    if (PrimeRecursive(n, n - 1)) { printf("N = %i is PRIME\n", n); }
    else { printf("N = %i is NOT PRIME\n", n); }
    
    return EXIT_SUCCESS;
}

int PrimeRecursive(int n, int d) {
    switch (n) {
                    //1 is not prime
        case 1:     return FALSE;
                    break;
            
                    //2 is the only one even number to be prime
        case 2:     return TRUE;
                    break;
            
                    //Every even number can be divided by 2 and therefore is not prime
        default:    if (n % 2 == 0) { return FALSE; }
            
                    //If divisor reaches 1 then n is prime
                    else if (d == 1) { return TRUE; }
            
                    //If the remainder of the euclidean division is 0 then n is prime
                    else if (n % d == 0) { return FALSE; }
            
                    //Recurse
                    else { return PrimeRecursive(n, d - 1); }
                    break;
    }
}
