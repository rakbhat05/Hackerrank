//Control Statements - Special number
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int summ(int num){
    int sum =0;
    while(num > 0){
    sum += num%10;
    num/= 10;
    }
    return sum;
}
int prod(int num){
    int p=1;
    while(num > 0){
    p *= num%10;
    num/=10;
    }
    return p;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m,n;
    cin>>m>>n;
    int ts=0;
    for(int i=m;i<=n;i++){
      int ts = summ(i);
        int tp = prod(i);
            if((ts+tp)==i){
    cout<<i<<endl;
    }
    }
 
    
    return 0;
}
