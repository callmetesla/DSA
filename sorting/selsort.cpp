#include<iostream>
using namespace std;
int main(){

        int a[]={0,5,6,3,2,1,4};
        int temp,n;
        n=sizeof(a)/sizeof(a[0]);
        for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
        }

        for(int i=0;i<n;i++)
            cout<<a[i]<< "  ";
        return 0;
}
