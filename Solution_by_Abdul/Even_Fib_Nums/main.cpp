/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Purpose: Project Euler Problem 2 Even Fibonacci Numbers
 * Created on November 8, 2015, 10:04 PM
 */
//System & User
//Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

// Execution begins here
int main(int argc, char** argv) {    
    
    // Declare variables
    int sum = 0,   // Integer variable to hold the sum
        fib_0 = 0, // Base case 0
        fib_1 = 1, // Base case 1
        fib_n = 0; // Nth fibonacci number
    
    // Calculate the sum
    while(fib_n<4000000){
        fib_0 = fib_1;
        fib_1 = fib_n;
        fib_n = fib_0 + fib_1;
        
        if(fib_n%2==0){
            sum += fib_n;
        }
    }
    
    // Output the result
    cout<<sum<<endl;
    
    // End of program
    return 0;
    
}


