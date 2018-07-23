#include<iostream>
using namespace std;
int main(){
    
    int a[]={-2,-3,4,-1,-2,1,5,-3};
    int n=*(&a+1)-a;
    int local,global;
    local=global=a[0];
    for(int i=1;i<n;i++){
    
        local=max(a[i],local+a[i]);
        global=max(global,local);
    }
    cout<<global;
    return 0;
}
