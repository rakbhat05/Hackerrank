//Control Statements - Collatz problem
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
    int s=0;
    cout<<n<<endl;
    while(n != 1){
        if(n%2 == 0){
          n=(n/2);
        }
        else{
            n=(3*n+1);
        }

        cout<<n<<endl;
        s++;
    }
    cout<<s<<endl;
 
    return 0;
}
