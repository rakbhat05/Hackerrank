//Decision Making - Hotel Tariff Calculator
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int month;
    int rent;
    int d;
    int c=0;
    cin>>month>>rent>>d;
    if(month>12){
        cout<<"Invalid Input"<<endl;
    }else{
        if(month == 4 or month == 5 or month == 6 or month == 11 or month == 12 ){
            rent = rent+(rent*0.20);
            c = rent*d;
            cout<<c<<endl;
        } else {
            c = rent *d;
            cout<<c<<endl;
        } 
        
    }
    return 0;
}
