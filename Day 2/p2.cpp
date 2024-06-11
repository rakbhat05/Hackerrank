//Operators - Debt Repay
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    float p;
    float r;
    float t;
  cin>>p>>r>>t;
    float interest=(p*r*t)/100;
    cout<<fixed<<setprecision(2)<<interest<<endl;
    cout<<(p+interest)<<endl;
    cout<<(interest*0.02)<<endl;
    float l=(p+interest)-(interest*0.02);
    cout<<l<<endl;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
