//Decision Making - Checking Alphabets
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char c;
    cin>>c;
    if(isalpha(c)){
    if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='A' or c=='E' or c=='I' or c=='O' or c=='U' ){
cout<<"Vowel"<<endl;
    }
    else{
cout<<"Consonant"<<endl;
    }
    }
    else{
cout<<"Not an alphabet"<<endl;
    }
    return 0;
}
