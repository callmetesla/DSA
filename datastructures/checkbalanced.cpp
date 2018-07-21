#include<bits/stdc++.h>
using namespace std;
int Balanced(string s){
      stack <char> st;
      for(int i=0;i<s.length();i++)
      {

          if(s[i]=='(' || s[i]=='{' || s[i]=='[')
              st.push(s[i]);
          else{
              switch(s[i]){

                  case '}':
                      {
                      char c=st.top();
                      st.pop();
                      if(c!='{}')
                      {return 0;
                      }}

                  case ']':
                      {
                      char c=st.top();
                      st.pop();
                      if(c!='[')
                      {return 0;
                      }}


                  case ')':
                      {
                      char c=st.top();
                      st.pop();
                      if(c!='(')
                      {return 0;
                      }}




                      }
              }
          }
          return 1;



}
int main(){
    string s;
    cin>>s;
    cout<<Balanced(s);

    return 0;

}
