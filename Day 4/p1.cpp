//Control Statements - Print Prime Numbers in a range
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void prime(int n){
    int flag;
    for(int i=0;i<=n;i++){
        if(i==0||i==1){
        continue;
        }
        flag =1;
        for(int j=2;j<=(i/2);j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
            if(flag == 1){
        cout<<i<<" ";
    }
    }

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    prime(n);
    return 0;
}
