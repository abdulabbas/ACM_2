/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul-Hakim 
 * Created on October 29, 2016, 8:17 PM 
 */

#include <cstdlib>

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll n;
ll a;

int main() {
    scanf("%d",&n);
    for(ll i=1;i<=n;i++) {
        if(i==1)
            a=2;
        else
            a=i*(i+1)*(i+1)-i+1;
        printf("%d\n", a);
    }
}

