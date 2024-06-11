//Control Statements - Strong Number
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int num;
    num=n;
    int r=0;
    int f=0;
    int s=0;
    while(n>0){
        r=n%10;
        f=factorial(r);
        s += f;
        n=n/10;
    }
    if(s==num){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
