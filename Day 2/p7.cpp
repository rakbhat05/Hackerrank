//Operators - Reverse a 3-digit number
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    cin>>num;
    string n=to_string(num);
    if(num>99 && num<1000){
   reverse(n.begin(),n.end());
    }
    cout<<n<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
