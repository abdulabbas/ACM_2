/* 
 * File:   main.cpp
 * Author: Abdul-Hakim Basil Abbas 
 * Created on October 22, 2016, 10:05 PM
 */

#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <vector>


using namespace std;

/*
 * 
 */

int main() {

    long long n(0); scanf("%lld", &n);
    std::vector<long long> primeDecomp;

    long long source(n), test(2);
    while(source > 1 && test <= sqrt(n)){
        if(source % test == 0){primeDecomp.push_back(test); source /= test;}
        else{++test;}
    }
    if(source > 1){primeDecomp.push_back(source);}

    if(primeDecomp.size() <= 1){printf("1\n0");}
    else if(primeDecomp.size() == 2){puts("2");}
    else if(primeDecomp.size() > 2){printf("1\n%lld\n", primeDecomp[0] * primeDecomp[1]);}

    return 0;
}

