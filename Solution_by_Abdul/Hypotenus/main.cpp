/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 *
 * Created on October 16, 2015, 1:25 PM
 */
//System libraries
#include <cstdlib>
#include<iostream>
//User libraries
using namespace std;
//Global constants
//Function prototypes
//Execution Begins here!
int main(int argc, char** argv) {
    int a = 1927738291;
    int result = a;
    int temp;
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            temp = a / i;
            a = temp;
            
            bool prime = true;
            for (int j = 2; j < a; j++) {
                if ((a % i) == 0) {
                    prime = false;
                }
            }
            if (prime) {
                for (int k = 1; k < a / 4; k++) {
                    if ((a % (4 * k + 1)) == 0) {
                        cout << result << " yes";
                        return 0;
                    }
                }
            }
            continue;
        }
    }
    bool prime2=true;
    for(int i=2;i<result;i++){
        if(result%(4*i+1)==0){
            prime2=false;
            break;
        }
    }
    if (a == result&&prime2) {
        cout << result << " yes";
        return 0;
    }
    cout << result << " no";
    return 0;
}
