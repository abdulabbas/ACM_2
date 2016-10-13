/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 *
 * Created on September 17, 2016, 6:59 PM
 */

#include <cstdlib>
#pragma comment(linker, "/STACK:1024000000,1024000000")
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include<stack>
#include<math.h>
#include<vector>
#include<map>
#include<set>
#include<bitset>
#include<cmath>
#include<complex>
#include<string>
#include<algorithm>
#include<iostream>
#define eps 1e-9
#define LL long long
#define PI acos(-1.0)
#define bitnum(a) __builtin_popcount(a)

using namespace std;

const int N = 100005;
const int M = 20005;
const int inf = 1000000007;
const int mod = 7;
char s[N];

/*
 * 
 */
int main(int argc, char** argv) {

    int v=0,h=0,i;
    scanf("%s",s);
    if(strlen(s)%2)
    {
        puts("-1");
        return 0;
    }
    for(i=0;s[i]!='\0';i++)
        if(s[i]=='U')
            v++;
        else if(s[i]=='D')
            v--;
        else if(s[i]=='R')
            h++;
        else
            h--;
    printf("%d\n",(abs(v)+abs(h))/2);
    return 0;
}
