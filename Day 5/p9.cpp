//Arrays 1D - Array insertion
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void insert(int* a,int n,int pos,int ele){
    for(int i=n-1;i>=(pos-1);i--){
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pos;
    cin>>pos;
    int ele;
    cin>>ele;
  if(pos > n){
cout<<"Invalid Input"<<endl;
  return 0;
  }
    insert(a,n,pos,ele);
    n++;
    cout<<"Array after insertion is "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }    
    return 0;
}
