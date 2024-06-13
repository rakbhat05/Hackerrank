//Arrays 1D - Same or Not
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n1,n2;
    cin>>n1>>n2;
    int s1=0;
    int s2=0;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
  cin>>a[i];
    }
        for(int j=0;j<n2;j++){
  cin>>b[j];
    }
  if(n1 == n2){
   for(int i=0;i<n1;i++){
 s1+=a[i];
    }
    for(int j=0;j<n2;j++){
 s2 += b[j];
    }
  if(s1 == s2){
      cout<<"Same"<<endl;
  }
                 else{
              cout<<"Not Same"<<endl;
} 
     
  }
 
              else{
              cout<<"Not Same"<<endl;
}
    return 0;
}
