//Control Statements - Treasure Finder
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int p,q,r;
    cin>>p>>q>>r;
    int m=max(max(p,q),r);
    int mi=min(min(p,q),r);
    int rem=(p+q+r)-m-mi;
    cout<<"The treasure is in the box which has the number "<<rem<<endl;
    
    int d=1;
    for(int i=1;i<=mi;i++){
        if(p%i==0 && q%i == 0 && r%i == 0){
            d=i;
        }
    }
    cout<<"The code to open the box is "<<d<<endl;
    return 0;
}
