//Array 1D - Pair the Container
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin>>num;
    int c[num];
    for(int i=0;i<num;i++){
        cin>>c[i];
    }
    sort(c,c+num);
   int l=0;
    int r=num-1;
    while(l<=r){
        if(c[r]!=c[l]){
        cout<<c[r]<<" "<<c[l]<<endl;
        r--;
        l++;
        }
        else{
  cout<<c[r]<<" "<<0<<endl;
        r--;
        l++;
        }
    }
    
    return 0;
}

