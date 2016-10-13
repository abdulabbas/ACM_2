/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Created on November 8, 2015, 10:30 PM
 */
//System & User
//Libraries

#include <cstdlib>
#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>


using namespace std;

void step(vector<pair<int, int> >v, string &str,int dim) {
//       cout<<"test_begin: "<<"str is "<<str<<endl;
    if (v.size() == 1) {
        if (dim==str.length())
            cout << str << endl;
        else {
        }
    } else {
        for (int i = 1; i < v.size(); i++) {
            if (v[0].first == v[i].first && v[i].second != v[0].second) {
                string s = str;
                if (v[i].second > v[0].second &&
                        (s == "" || s.substr(s.length() - 1, 1) == "W")) {
                    s = s + "N";
                } else if (v[i].second < v[0].second &&
                        (s == "" || s.substr(s.length() - 1, 1) == "E")) {
                    s = s + "S";
                } else {
                    
                }
                v[0].second = v[i].second;
                v.erase(v.begin() + i);
//                                cout << "test: " << "str is " << s << endl;
//                                for (int i = 0; i < v.size(); i++) {
//                                    cout << v[i].first << " " << v[i].second << endl;
//                                }
                step(v, s, dim);
            }
            if (v[0].first != v[i].first && v[i].second == v[0].second) {
                string s = str;
                if (v[i].first > v[0].first &&
                        (s == "" || s.substr(s.length() - 1, 1) == "N")) {
                    s = s + "E";
                } else if (v[i].first < v[0].first &&
                        (s == "" || s.substr(s.length() - 1, 1) == "S")) {
                    s = s + "W";
                } else {
                }
                v[0].first = v[i].first;
                v.erase(v.begin() + i);
//                                cout << "test: " << "str is " << s << endl;
//                                for (int i = 0; i < v.size(); i++) {
//                                    cout << v[i].first << " " << v[i].second << endl;
//                                }
                step(v, s, dim);
            }
        }
    }
}

/*
 * 
 */
int main(int argc, char** argv) {
    ifstream ifs;
    vector<string>v;
    ifs.open("input.txt");
    try {
        string str;
        if (ifs) {
            int dim;
            while (getline(ifs, str)) {
                dim = atoi(str.c_str());
                if (dim == 0) {
                } else {
                    vector<pair<int, int> >v;
                    for (int i = 0; i < dim; i++) {
                        getline(ifs, str);
                        v.push_back(make_pair(atoi(str.substr(0, 1).c_str()), atoi(str.substr(2, 1).c_str())));
                    }
                    v.push_back(v[0]);
                    string s = "";
                     step(v, s,dim);
                }
            }
        } else throw "no the file";

    } catch (const char*e) {
        cout << e << endl;
    }
    return 0;
}

