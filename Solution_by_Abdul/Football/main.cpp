/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 *
 * Created on April 15, 2016, 3:23 PM
 */

#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
 * http://codeforces.com/problemset/problem/96/A
 */
int main(int argc, char** argv) {
    string x = "";
    int counter=0;
    char which;
    int i=0;
    
    getline(cin,x);
    
    for(int i=0;i<x.size();i++){
        if(x[i]==which){
            counter++;
        }
        else if(x[i] != which){
            counter=1;
            which=x[i];
        }
        if(counter==7){
            cout<<"YES\n";
            return 0;
        }
        
    }
    cout<<"NO\n";
    
    return 0;
}

