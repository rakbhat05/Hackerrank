//Operators - Splitting into the teams
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int f,l;
    cin>>f>>l;
    int n=f/l;
    
    cout<<"The number of friends in each team is "<<n<<" and left out is "<<f-(n*l)<<endl;
    return 0;
}
