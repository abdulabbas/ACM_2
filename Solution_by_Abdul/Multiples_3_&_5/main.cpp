/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Purpose: Project Euler Problem 1
 * Created on November 8, 2015, 10:13 PM
 */
//System & User
//Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

// Execution begins here
int main(int argc, char** argv) {    
    
    // Integer variable to hold the sum
    int sum = 0;
    
    // Calculate the sum
    for(int i=3;i<1000;i+=3){  // Add multiples of 3 to the sum
        sum += i;
    }
    for(int i=5;i<1000;i+=5){  // Add multiples of 5 to the sum
        sum += i;
    }
    for(int i=15;i<1000;i+=15){ // Subtract the numbers included twice, the 
        sum -= i;               // multiples of both 3 and 5 (aka multiples of 15)
    }
    
    // Output the result
    cout<<sum<<endl;
    
    // End of program
    return 0;
    
}

