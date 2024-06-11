//Control Statements - Amoeba Multiplication
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num;
    cin >> num;
    
    if(num == 0 || num==1) {
        cout << "0";
    } else {
        int s1=0,s2=1,s3=0;
        for(int i=2;i<num;i++) {
            s3 = s1 + s2;
            s1 = s2;
            s2 = s3;
        }
        cout << s3;
    }
    return 0;
}
