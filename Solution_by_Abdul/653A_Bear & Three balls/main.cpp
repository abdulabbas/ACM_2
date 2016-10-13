/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul-Hakim Abbas
 *
 * Created on September 17, 2016, 6:09 PM
 */

#include <cstdlib>


#include <bits/stdc++.h>

using namespace std;

typedef set<int>::iterator iter;

/*
 * 
 */
int main(int argc, char** argv) {

   int n;
    cin>>n;
    int array[n];
    
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        array[i]=num;
    }
    
    set<int>x;
    for(int i=0;i<n;i++){
      x.insert(array[i]);  
    }
    int c=0;
    iter end=--x.end();
    iter j=++x.begin();
    j++;
    end--;
    for(iter i=x.begin(); i!=end;i++,j++) {
        
        if(*j-*i<=2){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    
  
    return 0;
}

