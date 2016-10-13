/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * ACM Question
 * Counter for Sundays
 * Created on October 16, 2015, 11:35 AM
 */
//System libraries
#include <cstdlib>
#include <iostream>
//User libraries
using namespace std;
//Global constants
//Function prototypes
//Execution Begins here!
int main(int argc, char** argv) {
   //declare some variables
    int begin=1901;
    int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};    
    int sundayCount=0;
    int beginNumber=367;
    while(begin<2001){
        if(begin%4==0){
            mon[1]=29;
           for(int i=0;i<12;i++){
               beginNumber+=mon[i];
               if(beginNumber%7==0)
                   sundayCount++;
           }
           begin++;
        }
        else{
            mon[1]=28;
            for(int i=0;i<12;i++){
                beginNumber+=mon[i];
                if(beginNumber%7==0)
                    sundayCount++;
            }
            begin++; 
        }      
    }
    if (beginNumber%7==0)//2001
        sundayCount--;
    if(367%7==0)//1901
     sundayCount++;
    cout<<sundayCount;
    return 0;
}

