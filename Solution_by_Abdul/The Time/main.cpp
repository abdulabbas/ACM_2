/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 *
 * Created on April 15, 2016, 3:26 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string time;
    getline(cin, time);
//    cout << time << endl;
    int add;
    cin >> add;
    string a = time.substr(0, 2);
    string b = time.substr(3, 5);
    
    int hour = atoi(a.c_str());
    int min = atoi(b.c_str());
    
//    cout << hour << ":" << min << endl;
    int newmin = add + min;
    if(newmin >= 60)
    {
        hour = hour + newmin / 60;
        newmin = newmin % 60; 
    }
    
    if(hour >= 24) hour = hour % 24;
    
    if(hour <= 9)
    {
        cout << "0" << hour;
    }
    else cout << hour;
    
    cout << ":";
    
    if(newmin < 10) 
        cout << "0" << newmin << endl;
    else cout << newmin << endl;
    
    
    return 0;
    
}

