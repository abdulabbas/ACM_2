/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
<<<<<<< HEAD
 * Purpose: To solve 4th problem which deals with
 * Rank Order it came from the 2014 ACM Questions
=======
 *
>>>>>>> parent of 4fd1f12... Work
 * Created on September 18, 2015, 9:48 AM
 */
//System libraries
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>
#include <fstream>
using namespace std;
//User libraries
//Global constants
//Function Prototypes
//Execution begins here!
int main() {
    ifstream ifs;
    vector< pair<int, int> >vP;
    vector<int >v;
    ifs.open("input.txt");
    try {
        if (ifs) {
            int count = 0;
            int save;
            int k = 0;
            while (ifs >> save) {
                v.push_back(save);
                int inP;
                for (int i = 0 + k; i < k + save; i++) {//save_vP_1st
                    ifs>>inP;
                    vP.push_back(make_pair(inP, 0));
                }
                for (int i = 0 + k; i < k + save; i++) {//2nd 
                    ifs>>inP;
                    vP[i].second = inP;
                }
                k = save + k;
            }
            cout << v[0];
            int temp[2];
            while (v.size() > 0) {
                for (int i = 0; i < v[0]; i++) {
                    for (int j = 0; j < v[0] - 1; j++) {
                        if (vP[j].second < vP[j + 1].second) {
                            temp[0] = vP[j].first;
                            temp[1] = vP[j].second;
                            vP[j].first = vP[j + 1].first;
                            vP[j].second = vP[j + 1].second;
                            vP[j + 1].first = temp[0];
                            vP[j + 1].second = temp[1];
                        }
                    }
                }
                bool out = true;
                for (int i = 0; i < v[0] - 1; i++) {
                    if (vP[i].first < vP[i + 1].first) {
                        cout << i + 1 << endl;
                        out = false;
                        break;
                    }
                }
                if (out)
                    cout << " Agree" << endl;
                //vector
                vP.erase(vP.begin(), vP.begin() + v[0]);
                v.erase(v.begin());
            }
        } else throw "no this file";
    } catch (const char* e) {
        cout << e << endl;
    }
    ifs.close();
    return 0;
}


