//Arrays 2D - Upper triangular matrix
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
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
           if( a[i][j]!=0){
              cout<<"Not an Upper triangular matrix"<<endl;
               exit(0);
           } 
        
        }
    }
  
        cout<<"Upper triangular matrix"<<endl;

    return 0;
}
