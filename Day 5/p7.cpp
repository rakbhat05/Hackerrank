//Arrays 1D - Ascending order
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void selection(int n,int* a){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        if(i!=min){
            swap(a[i],a[min]);
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
cin>>a[i];
    }
     cout<<"The Sorted array is:"<<endl;
    selection(n,a);
        for(int i=0;i<n;i++){
cout<<a[i]<<endl;
    }
    return 0;
}
