#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int lis(int a[],int n){
vector<int> b(n,1);
for(int i=1;i<n;i++){
for(int j=0;j<i;j++){
if(a[i]>a[j] && b[i]<b[j]+1)
  b[i]=b[j]+1;
}
}
sort(b.begin(),b.end());
return b[n-1];


}
int main(){

  int a[]={1,2,3,4,5};
  int t=*(&a+1)-a;

  cout<<lis(a,t);
  return 0;
}
