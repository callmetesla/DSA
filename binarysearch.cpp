#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key){
        int left=0,right=n-1,mid;
        while(left<=right){
        mid=left+(right-left)/2;//Overflow condition prevent
        if(a[mid]<key){
        left=mid+1;
        }
        else if(a[mid]>key){
        right=mid-1;
        }
        else{
            return mid;
        }}
        return -1;

}
int main(){
        int a[]={1,2,3,22,33,222};
        int n;
        n=sizeof(a)/sizeof(a[0]);
        cout<<binarysearch(a,n,33);
