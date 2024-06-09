//Decision Making - Gift for Birthday
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int year;
    cin>>year;
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                cout<<year<<" is a leap year"<<endl;
            }else{
               cout<<year<<" is not a leap year"<<endl; 
            }
        }
        else{
            cout<<year<<" is a leap year"<<endl;
        }
    }else{
        cout<<year<<" is not a leap year"<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
