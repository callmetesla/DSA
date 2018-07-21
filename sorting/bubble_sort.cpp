#include<iostream>
using namespace std;
int main(){
        int a[]={5,2,4,1,2,4};
        int n=sizeof(a)/sizeof(a[0]);
        int temp;
        for(int i=0;i<n-1;i++){
        
           for(int j=0;j<n-i-1;j++)
           {
                if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                }
           }
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        return 0;
}
