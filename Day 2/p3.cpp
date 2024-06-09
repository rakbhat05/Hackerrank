//Operators - 3 Psychos
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;

    double m1=(x1+x2)/2.0;
    double m2=(y1+y2)/2.0;
    cout<<fixed<<setprecision(1);
    cout<<"Arun's house is located at("<<m1<<","<<m2<<")"<<endl;
    return 0;
}
