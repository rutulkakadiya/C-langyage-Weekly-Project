// Write a C program to calculate the compound interest for a given principal, rate, and time using loops.

// Enter principal amount: 1000
// Enter annual interest rate (in percentage): 5
// Enter time (in years): 2
// Compound Interest: 102.50

#include<stdio.h>

main(){
    float amt,rate,year,interest;
    

    
    printf("Enter the amount=");
    scanf("%f",&amt);
    
    printf("Enter the interest rate=");
    scanf("%f",&rate);
    
    printf("Enter the year=");
    scanf("%f",&year);
    
    interest=(amt*rate*year)/100;

    
    printf("Interest=%f",interest);

}