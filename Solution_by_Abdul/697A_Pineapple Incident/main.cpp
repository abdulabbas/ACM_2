/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 *
 * Created on September 17, 2016, 6:30 PM
 */

#include <cstdlib>
#include<cstdio>
#include<cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int t,s,x;
    scanf("%d%d%d",&t,&s,&x);
    if (x>=t &&( (x-t)%s==0 || (x-t-1!=0 && (x-t-1)%s==0))) printf("YES\n");
    else printf("NO\n");
    return 0;
}
