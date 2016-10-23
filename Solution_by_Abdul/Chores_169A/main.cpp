/* 
 * File:   main.cpp
 * Author: Abdul-Hakim Abbas 
 * Created on October 22, 2016, 10:20 PM 
 */

#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    
    long n, a, b; scanf("%ld %ld %ld\n", &n, &a, &b);

    std::vector<long> compVec(n, 0);
    for(int k = 0; k < n; k++){scanf("%ld ", &compVec[k]);}
    sort(compVec.begin(), compVec.end());

    printf("%ld\n", compVec[b] - compVec[b - 1]);

    return 0;
}
