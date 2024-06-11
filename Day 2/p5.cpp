//Operators - Dollars & Cents
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int d1,c1,d2,c2;
    cin>>d1>>c1>>d2>>c2;
    int t1=d1*100+c1;
    int t2=d2*100+c2;
    int t11=t1+t2;
   int d11=t11/100;
    int c22=t11%100;
    cout<<d11<<endl;
    cout<<c22<<endl;
    return 0;
}
