//Decision Making - Electricity Bill
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int u;
    cin>>u;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    if(u <= 200){
        int a = u*0.5;
        cout<<"Rs."<<a<<endl;
    }
    else if(u <= 400){
        int a = u*0.65 + 100;
        cout<<"Rs."<<a<<endl;
    }
    else if(u <= 600){
        int a = u*0.80 + 200;
        cout<<"Rs."<<a<<endl;        
    }
    else{
        int a=u*1.25+425;
        cout<<"Rs."<<a<<endl;
    }
    return 0;
}
