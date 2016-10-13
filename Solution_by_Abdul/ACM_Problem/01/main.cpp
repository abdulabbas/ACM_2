/* 
 * File:   main.cpp
 * Author: Abdul Abbas
 * Location: RCC
 * Created on March 10, 2016, 3:56 PM
 */
 
//System Libraries
#include<iostream>

using namespace std;

/*
 * http://codeforces.com/problemset/problem/651/A
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


