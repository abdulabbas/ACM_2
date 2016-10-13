/* 
 * File:   main.cpp
 * Author: Abdul-Hakim 
 * Created on October 31, 2015, 3:56 PM 
 * Purpose: 2013 ACM Questions 
 * 6 light bulbs Question 
 */
//System Libraries
#include <cstdlib>
#include<iostream>
#include<cmath>
//User Libraries
using namespace std;
//Global constants
//Function Prototypes
//Execution begins here!
int main(int argc, char** argv) {
    long index;
    long n;
    cin>>n;
    long t;
    cin>>t;
    cin>>index;
    int count = 0;
    if (t >= (n + 1))
        t = t % (n + 1);
    for ( long i = 1; i <= sqrt(index); i++) {
        if (index % i == 0 && i <= t) {
            count++;
       //cout << "i is "<<i<<"\t~~ count " << count << endl;
      //cout<<"t is "<<t<< "  and (index/i) is "<<index/i<<endl;
            if(index/i<=t)
                count++;
        }       
    }
    if (sqrt(index) == (int) sqrt(index)) {
        count--;
      //cout << "3 count " << count << endl;
    }
    if (count % 2 == 0)
        cout << "off";
    else
        cout << "on";
    return 0;
}

