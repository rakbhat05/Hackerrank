//Operators - Harry Potter
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d",&num);
if(num < 0){
num =-num;
}
    int f=num/1000;
    int l=num%10;
    int s=f+l;
    printf("%d",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
