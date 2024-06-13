//Arrays 1D - Sum of even numbers and odd numbers
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
    int a[n];
    int s1=0,s2=0;
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2 == 0){
            s1 += a[i];
        }
        else{
            s2 += a[i];
        }
    }
    cout<<"The sum of the even numbers in the array is "<<s1<<endl;
    cout<<"The sum of the odd numbers in the array is "<<s2<<endl;
    return 0;
}
