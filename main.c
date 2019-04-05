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
int PrimeIterative(int n);
void PrimeTest();

int main(int argc, const char * argv[]) {

    int n = 0;

    //Title
    printf("OPTIMUS PRIME ?\n");
    printf("===============\n");
    
    //Tests
    PrimeTest();
    
    //Ask a number to user
    printf("\n\nPrime property of N = ");
    scanf("%i", &n);
    
    //Test if n is prime with recursivity function
    printf("\nRecursive : \n");
    if (PrimeRecursive(n, n - 1)) { printf("N = %i is PRIME\n", n); }
    else { printf("N = %i is NOT PRIME\n", n); }
    
    //Test if n is prime with iterative function
    printf("\nIterative : \n");
    if (PrimeIterative(n)) { printf("N = %i is PRIME\n", n); }
    else { printf("N = %i is NOT PRIME\n", n); }
    
    return EXIT_SUCCESS;
}

int PrimeRecursive(int n, int d) {
    //Numbers lesser or equal to 1 are not prime
    if (n <= 1) { return FALSE;}
    
    switch (n) {
                    //2 is the only one even number to be prime
        case 2:     return TRUE;
                    break;
            
                    //Every even number can be divided by 2 and therefore is not prime
        default:    if (n % 2 == 0) { return FALSE; }
            
                    //If divisor reaches 1 then n is prime
                    else if (d == 1) { return TRUE; }
            
                    //If the remainder of the euclidean division is 0 then n is not prime
                    else if (n % d == 0) { return FALSE; }
            
                    //Recurse
                    else { return PrimeRecursive(n, d - 1); }
                    break;
    }
}

int PrimeIterative(int n) {
    //Numbers lesser or equal to 1 are not prime
    if (n <= 1) { return FALSE;}
    
    switch (n) {
                    //2 is the only one even number to be prime
        case 2:     return TRUE;
                    break;
            
                    //Every even number can be divided by 2 and therefore is not prime
        default:    if (n % 2 == 0) { return FALSE; }
                    else {
                        for (int d = n - 1; d >= 1 ; --d) {
                            //Pass if the divisior is even
                            if (d % 2 == 0) {}
                            
                            //If divisior reaches 1 then n is prime
                            else if (d == 1) { return TRUE; }
                            
                            //If the remainder of the euclidean division is 0 then n is not prime
                            else if (n % d == 0) { return FALSE; }
                            
                            //Iterate
                            else {}
                        }
                        return FALSE;
                    }
                    break;
    }
}

void PrimeTest() {
    int n ;
    //Test limit values
    n = -7;
    printf("\nTest if %2i is NOT PRIME : ", n);
    if (PrimeRecursive(n, n - 1) == FALSE) { printf("PASS"); }
    else { printf("FAIL"); }
    
    n = 0;
    printf("\nTest if %2i is NOT PRIME : ", n);
    if (PrimeRecursive(n, n - 1) == FALSE) { printf("PASS"); }
    else { printf("FAIL"); }
    
    n = 1;
    printf("\nTest if %2i is NOT PRIME : ", n);
    if (PrimeRecursive(n, n - 1) == FALSE) { printf("PASS"); }
    else { printf("FAIL"); }
    
    n = 2;
    printf("\nTest if %2i is PRIME     : ", n);
    if (PrimeRecursive(n, n - 1) == TRUE) { printf("PASS"); }
    else { printf("FAIL"); }
    
    //Test any value
    n = 96;
    printf("\nTest if %2i is NOT PRIME : ", n);
    if (PrimeRecursive(n, n - 1) == FALSE) { printf("PASS"); }
    else { printf("FAIL"); }
    
    n = 97;
    printf("\nTest if %2i is PRIME     : ", n);
    if (PrimeRecursive(n, n - 1) == TRUE) { printf("PASS"); }
    else { printf("FAIL"); }
}
