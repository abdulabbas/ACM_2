/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Created on April 24, 2016, 11:36 AM
 */

//Joysticks
//651A

//System Libraries
#include<iostream>
#include <cstdlib>

using namespace std;
/*
 *
 */

int main(int argc, char** argv)
{
	int p = 0; //Joystick 1
	int d = 0; //Joystick 2
	int m = 0;
	cin>>p;
	cin>>d; 
	 while(p != 0 && d != 0){
	 	if(p<2 && d<2){
	 		cout<<"0\n";
	 		return 0;
		 }
		 if(p<d || p==d){
		 	p++;
		 	d-=2;
		 	m++;
		 }
		 else if(p>d){
		 	d++;
		 	p-=2;
		 	m++;
		 }
	 }
     cout<<m<<endl;
     return 0;
}



