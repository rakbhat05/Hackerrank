//Control Statements - Inverted right-angled triangle
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
         cout<<"*";
        }
        cout<<endl;
}
    return 0;
}
