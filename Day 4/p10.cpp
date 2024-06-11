//Control Statements - Sum of digit till single digit
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int summation(long long int num){
    int s=0;
while(num > 0){
   s+=num%10;
   num=num/10;
    
}
    return s;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n;
     cin>>n;
while(n>9){
n=summation(n);
}
    cout<<n;
    return 0;
}
