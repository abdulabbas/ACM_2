/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul-Hakim Basil Abbas 
 * Created on October 29, 2016, 7:18 PM 
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // insert code here...
    
    int length, total, current=-1;
    vector<int> individualSize;
    string line;
    
    cin >> length;
    cin >> line;
    
    for(int i=0;i<length;i++){
        
       
        
        if(line[i]=='B'){
            total++;
            individualSize.push_back(0);
            current++;
        }
        
        
        while(line[i]=='B'){
            individualSize[current]++;
            i++;
            if(i>=length){
                break;
            }
        }
    }
    
    cout << total << endl;
    
    for(int i=0; i<individualSize.size(); i++){
        cout << individualSize[i];
        if(i<individualSize.size()-1){
            cout << " ";
        }
    }
    

    return 0;
}
