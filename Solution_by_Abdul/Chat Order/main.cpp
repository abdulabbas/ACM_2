/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Created on April 23, 2016, 9:44 PM
 */

//Chat Order
//637B

#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
/*
 * 
 */
int main(){
    int n;
    cin>>n;
	
    vector <string> order;
	map<string,int> count;
    
    for(int i = 0; i < n; i++){
        string name;
        cin>>name;
        order.push_back(name);
        
    }
	for(int i = n-1 ; i >= 0; i--){
		count[order[i]]++;
                cout<<" "<< endl;
		if(count[order[i]] == 1){                
			cout << order[i] << endl;
		}
	}

    return 0;
}

