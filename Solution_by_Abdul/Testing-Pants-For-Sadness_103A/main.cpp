/* 
 * File:   main.cpp
 * Author: Abdul-Hakim Basil Abbas 
 * Created on October 22, 2016, 9:55 PM
 */

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    long long n; std::cin >> n;
    long long total(0);
    for(long p = 0; p < n; p++){
        long long m; std::cin >> m;
        total += (m - 1) * (p + 1) + 1;
    }

    std::cout << total << std::endl;

    return 0;
}
