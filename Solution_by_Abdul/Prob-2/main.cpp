/* 
 * File:   main.cpp
<<<<<<< HEAD
 * Author: Abdul Hakim Abbas
 * Purpose: Circular Prime Question number 35 on projecteuler.net
=======
 * Author: Abdul-Hakim
 *
 * Created on September 18, 2015, 9:48 AM
>>>>>>> parent of 4fd1f12... Work
 */
//system libraries
#include <cstdlib>
#include<iostream>
#include<vector>
#include<bitset>
#include<sstream>
#include<algorithm>
#include<cmath>
//user libraries
using namespace std;
//Global constants
const int MAX = 1000000;
//Functions
void output(bitset<MAX> primes) {
    for(int i = 0; i < MAX; i++) {
        if(primes[i] == 1) {
           cout << i << " "; 
        }
    }
}
int get_nth_prime(int n, bitset<MAX> primes) {
    int count = 0;
    for(int i = 2; i < MAX; i++) {
        if(primes[i]) {
            count++;
        } if(count == n) {
            return i;
        }
    }
return 0;
}int rotate_int(int x, int rotations) {

	    vector<int> vec;

	    ostringstream ostr;

	    ostr << x;

	    string str = ostr.str();

	    for(unsigned int i = 0; i < str.length(); i++) {
	        vec.push_back(str[i]-48);

	    }

	    rotate(vec.begin(), vec.begin()+rotations, vec.end());

	    int mul = 1;

	    for(unsigned int i = 1; i < vec.size(); i++) {

	        mul *= 10;

	    }

	    x = 0;

	    for(unsigned int i = 0; i < vec.size(); i++) {

	        x += vec[i] * mul;

	        mul /= 10;

	    }

	    return x;

	}

	//Execution begins here! 

	int main(int argc, char** argv) {

	    bitset <MAX> primes;

	    for(int i = 2; i < MAX; i++) {

	        primes[i] = 1;

	    }

	    // quick sieve of eratosthenes -- start it off

	    int sieve[] = {2,3,5,7}; // give it a few primes to start with

	    for(int mul = 0; mul < 4; mul++) {

	        for(int i = 1; i < MAX; i++) {

	            if(i % sieve[mul] == 0 && i != sieve[mul]) {

	                primes[i] = 0;

	            }

	        }

	    }

	 

	    // by now, we have a list of primes with some larger numbers still left

	    // in order to remove those, we now need to run through primes and

	    // make sure to remove multiples of primes up to sqrt(MAX)

	    for(int i = 2; i < sqrt(MAX); i++) {

	        if(primes[i]) {

	            for(int j = i+1; j < MAX; j++) {

	                if(j % i == 0) {

	                    primes[j] = 0;

	                }

	            }

	        }

	    }

	    ostringstream ostr;

	    int len;

	    bool t = 0;

	    int count = 0;

	    int x;

	    for(int i = 1; i < MAX; i++) {

	        if(primes[i]) {

	            ostr.str("");

	            ostr << i;

	            len = ostr.str().length();

	            for(int j = 0; j < len; j++) {

	                x = rotate_int(i, j);

	                t = primes[x];

	                if(!t) break;

	            }

	            if(t) {

	                count++;

	            }

	        }

	    }cout << count;

	 

	    return 0;

	}


