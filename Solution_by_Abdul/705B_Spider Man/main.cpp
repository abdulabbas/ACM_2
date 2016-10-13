/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 *
 * Created on September 17, 2016, 6:38 PM
 */

#include <cstdlib>
#include<cstdio>
#include<cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int n;
    while (scanf("%d",&n)!=EOF)
    {
        int a,temp=0;
        while (n--)
        {
            scanf("%d",&a);
            temp=(temp+a-1)%2;
            if (temp) printf("1\n");
            else printf("2\n");
        }
    }
    return 0;
}

