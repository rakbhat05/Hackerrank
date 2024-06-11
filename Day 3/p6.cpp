//Decision Making - Number of Days
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int year,month;
    cin>>year>>month;
if (year >= 1900 && year<=9999 && month>=1 && month <=12 ){
    if(month ==1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month ==12){
        cout<<"31 Days"<<endl;
    }
    else if(month == 2){
        if(year%4 == 0 && year % 100 != 0 || year%400 ==0 ){
            cout<<"29 Days"<<endl;
    }else{
cout<<"28 Days"<<endl;
        }
    }
 
    else if (month == 4 or month == 6 or month == 9 or month == 11){
        cout<<"30 Days"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
 
}else{
    cout<<"0"<<endl;
}
    return 0;
}
