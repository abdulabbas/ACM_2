/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


/* 
 * File:   main.cpp
 * Author: Abdul-Hakim Basil Abbas 
 * Created on October 29, 2016, 6:11 PM
 */



// Code Forces 731A - Night at the Museum.cpp 
#include <iostream>
#include <cstdio>

#include <string>
#include <cstring>
#include <sstream>

#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>

#include <algorithm>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>

#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;

int caseno = 1;
#define NL '\n'
#define FOR(I,J,K) for(I = J; I < K; I++)
#define REV(I,J,K) for(I = J; I > K; I--)
#define SF scanf
#define PF printf
#define CLR(ar) memset(ar, 0, sizeof(ar))
#define SET(ar) memset(ar, -1, sizeof(ar))
#define PC() printf("Case %d: ", caseno++)
#define READ() freopen("in.txt", "r", stdin)
#define WRITE() freopen("out.txt", "w", stdout)
#define BOOST std::ios_base::sync_with_stdio(0);

typedef long long LL;//NOTES:"%lld"
typedef unsigned long long ULL;//NOTES:"%llu"
typedef long long int64;//NOTES:int64
typedef unsigned long long uint64;//NOTES:uint64

#define INF 2147483647
#define MOD 1000000007
const double PI = 2 * acos(0.0);
const double EPS = 1e-11;
const int SIZE = 1e6;

string S;

int main()
{
	///BOOST
	int tcases, I, J, K, N, n, m, cnt = 0, len, mn = 0, x, y;
	///READ();
	///WRITE();
	cin >> S;
	len = S.length();

	char start = 'a';
	if(S[0] != start)
	{
		x = abs((int)S[0] - (int)start);
		y = abs(26 - x);
		mn += min(x, y);
	}

	///cout << mn << NL;
	start = S[0];
	for(I = 1; I < len; I++)
	{
		x = abs((int)S[I] - (int)start);
		y = abs(26 - x);
		mn += min(x, y);
		start = S[I];
	}

	cout << mn << NL;

	return 0;
}

