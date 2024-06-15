//Arrays 2D - Transpose Matrix
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
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
            cout<<endl;
    }
    cout<<"Transpose matrix is:"<<endl;
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
