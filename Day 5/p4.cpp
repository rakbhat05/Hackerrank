//Arrays 1D - Count distinct elements
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n1;
    cin>>n1;
    int a[n1];
    int c=0;
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n1;i++){
        if(a[i]!=a[i+1]){
          c += 1;  
        }
    }
    cout<<"There are "<<c<<" distinct element in the array."<<endl;
    return 0;
}
