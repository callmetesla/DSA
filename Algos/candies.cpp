#include<iostream>
using namespace std;
int main(){

  int t;
  cin>>t;
  while(t--){
    int n,o,d;
    int a,b,c,m,l;
    cin>>n>>o>>d;

    int x[n+1];
    int s[n+1];
    cin>>x[1]>>x[2]>>a>>b>>c>>m>>l;
    for(int i=3;i<n;i++){
      x[i]=(a*x[i-1]+b*x[i-2]+c)%m;
      s[i-2]=x[i-2]+l;
    }
    s[n-2]=x[n-2]+l;
    s[n-1]=x[n-1]+l;
    s[n]=x[n]+l;
  
    for(int i=1;i<=n;i++)
      cout<<s[i]<<"  ";
  
  }


  return 0;}
