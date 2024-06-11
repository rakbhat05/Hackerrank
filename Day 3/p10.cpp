//Control Statements - Multiplication Table
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin>>n>>m;
    cout<<"Enter n"<<endl;
    cout<<"Enter m"<<endl;
    cout<<"The multiplication table of "<<n<<" is"<<endl;
    for(int i=1;i<=m;i++){
        cout<<i<<"*"<<n<<"="<<(n*i)<<endl;
    }
        
    return 0;
}
