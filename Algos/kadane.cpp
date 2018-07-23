#include<iostream>
using namespace std;
int main(){

    int a[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(a)/sizeof(a[0]);
    int globalmax,localmax;
    globalmax=localmax=0;
    for(int i=0;i<n;i++){
    localmax+=a[i];
    if(localmax<0)//If it is negative,break the contiguous sum
        localmax=0;
    else if(globalmax<localmax)//Keep track of the max value
        globalmax=localmax;
    }
    cout<<globalmax;


    return 0;
}
