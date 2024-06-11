//Operators - Treasure Hunter
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,b,l;
    cin>>t>>l>>b;
    int l1;
    l1=(t*l)/100;
    int b1;
    b1=((t-l1)*b)/100;
    int eq;
    eq=(t-(l1+b1))/3;
    cout<<l1<<endl;
    cout<<b1<<endl;
    cout<<eq<<endl;
    
    return 0;
}
