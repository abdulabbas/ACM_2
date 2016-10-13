/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul-Hakim Abbas
 *
 * Created on September 17, 2016, 6:01 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
	string in;
	string out;
	int rows;
	string temp, temp2;
	bool done = false;
	
	cin >> rows;
	cin.ignore();
	for(int i = 0; i < rows; i++)
	{
		getline(cin,temp);
		if(temp[0] == 'O' && temp[1] == 'O' && !done)
		{
			cout << "YES" << endl;
			temp[0] = '+';
			temp[1] = '+';
			out += temp;
			done = true;
		}
		else if(temp[3] == 'O' && temp[4] == 'O' && !done)
		{
			cout << "YES" << endl;
			temp[3] = '+';
			temp[4] = '+';
			out += temp;
			done = true;
		}
		else
		{
			out += temp;
		}
	}
	
	if(!done)
	{
		cout << "NO" << endl;
		return 0;
	}
	
	int count = 0;
	for(int i = 0; i < out.length(); i++)
	{
		if(count == 5)
		{
			cout << endl;
			count = 0;
		}
		cout << out[i];
		count++;
	}
	
	return 0;
}

