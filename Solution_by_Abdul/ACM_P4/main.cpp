/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Purpose: Project Euler Problem 4 Largest Palindrome Product
 * Created on November 8, 2015, 9:13 PM
 */
//System & User 
//Libraries
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Execution begins here
int main(int argc, char** argv) {    
    
    // Declare variables
    int int_product = 0,
        product_size = 0;
    string str_product,
           max = "1";
    bool is_palindrome;
    
    // Loop through all combinations of three digit numbers while avoiding
    // duplicates by incrementing two counters
    for(int i=100,j=100;i<1000;i++,j++){
        for(int k=j;k<1000;k++){
            stringstream converter;
            is_palindrome = true;
            
            // Get the product, store it in a string, and find the num digits
            int_product = i * k;
            converter<<int_product;
            str_product = converter.str();
            product_size = str_product.size();
            
            // Check to see if the product is a palindrome
            int loop_size = product_size/2;
            for(int k=0;k<loop_size;k++){
                if(!(str_product[k]==str_product[product_size-1])){
                    is_palindrome = false;
                    break;
                }
                else{
                    product_size--;
                }
            }
            // If the product is a palindrome greater than the current max, make 
            // it the new max.
            if(is_palindrome&&(str_product>max||str_product.size()>max.size())){
                max = str_product;
            }    
        }
        
    }
    // Output the result
    cout<<max<<endl;
    
    // End of program
    return 0;
}    

