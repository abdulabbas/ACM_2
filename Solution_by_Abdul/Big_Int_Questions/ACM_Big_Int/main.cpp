/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Purpose: Addition using Big Int 
 * Created on October 28, 2015, 11:24 AM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
//User Libraries
using namespace std;
//Function Prototypes
int length(char []);
bool digitAdd(char,char,char &,bool=false);
int sizeResult(char [],char []);
bool numberAdd(char [],char [],char []);
//Global constants
//Execution begins here!
int main(int argc, char** argv) {
    //Create the test numbers using character arrays
    char number1[]="12345698765432109876543210";
    char number2[]="11111234567890123456789123";
    char result[sizeResult(number1,number2)];
    //Add the numbers
    cout<<number1<<endl;
    cout<<number2<<endl;
    bool x=numberAdd(number1,number2,result);
    if(x)cout<<"overflow"<<endl;
    else cout<<result<<endl;

    return 0;
}

bool numberAdd(char n1[],char n2[],char r[]){
    //Initialize the result array
    r[sizeResult(n1,n2)-1]='\0';
    for(int i=0;i<=sizeResult(n1,n2)-2;i++){
        r[i]='0';
    }
    //Start the counters
    int rcnt=sizeResult(n1,n2)-2;
    int n1cnt=length(n1)-1;
    int n2cnt=length(n2)-1;
    //Added the first digit
    bool c=digitAdd(n1[n1cnt--],n2[n2cnt--],r[rcnt--]);
    do{
    if(n1cnt<0&&n2cnt<0)return c;
    else if(n1cnt<0)c=digitAdd('0',n2[n2cnt--],r[rcnt--],c);
    else if(n2cnt<0)c=digitAdd(n1[n1cnt--],'0',r[rcnt--],c);
    else c=digitAdd(n1[n1cnt--],n2[n2cnt--],r[rcnt--],c);
    }while(true);
}

int sizeResult(char n1[],char n2[]){
    int size1=length(n1);
    int size2=length(n2);
    if(size1>size2)return size1+1;
    return size2+1;
}

bool digitAdd(char n1,char n2,char &d,bool c){
    int i1=n1-48,i2=n2-48;
    int sum=i1+i2+c;
    d=sum%10+48;
    return sum/10;
}

int length(char a[]){
    int cnt=0;
    do{}while(a[cnt++]!='\0');
    return cnt-1; 
}

