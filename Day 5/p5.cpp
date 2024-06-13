//Arrays 1D - Compatible array
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
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    int n2;
    cin>>n2;
    int b[n2];
    for(int j=0;j<n2;j++){
        cin>>b[j];
    }
    if(n1 != n2){
        cout<<"Incompatible"<<endl;
    }else{
    int f=0;
    for(int i=0;i<n1;i++){
    if(a[i] >= b[i]){
        f=1;
    }
        else{
            f=0;
            break;
        }
    }
    
    if(f == 1){
        cout<<"Compatible"<<endl;
    }
    else{
        cout<<"Incompatible"<<endl;
    }
    }
    return 0;
}
