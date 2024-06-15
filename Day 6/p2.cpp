//Arrays 1D - Toyland
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sortedpos(int* hpos,int* hnum,int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<num-1-i;j++){
            if(hpos[j]>hpos[j+1]){
                swap(hpos[j],hpos[j+1]);
                swap(hnum[j],hnum[j+1]);
            }
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int num;
    cin>>num;
    int hpos[num];
    int hnum[num];
    for(int i=0;i<num;i++){
        cin>>hnum[i]>>hpos[i];
    }
    sortedpos( hpos, hnum, num);
    int maxgap=0;
    int h1=-1,h2=-1;
    for(int i=0;i<num-1;i++){
        int gap=hpos[i+1]-hpos[i];
        if(gap>maxgap){
            maxgap=gap;
            h1=hnum[i];
            h2=hnum[i+1];
        }
    }
    if(h1>h2){
        cout<<h2<<" "<<h1<<endl;
    }else{
        cout<<h1<<" "<<h2<<endl;
    }
 
    
    return 0;
}
