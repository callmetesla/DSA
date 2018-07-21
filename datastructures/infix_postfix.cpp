#include<bits/stdc++.h>
using namespace std;
int prec(char ch){
        switch(ch){
       case '^': return 3;
       case '*': return 2;
        case '/': return 2;
        case '-':return 1;
      
       case '+':return 1;
       default:return -1;
        
        }

}
int main(){
    string s;
    cin>>s;
    stack <char> st;
    st.push('N');
    int l=st.length();
    string ns;
    for(int i=0;i<n;i++){
    if((s[i]>='a'&&s[i]<='z')&&(s[i]>='A'&&s[i]<='Z')){
    char c=s[i];
    ns+=c;
    }
    else if(s[i]=='('){
    st.push('(');

    }
    else if(s[i]==')'){
        while(st.top()!='N' && st.top()!='('){
        char c=st.top();
        st.pop();
        ns+=c;
        }
        if(st.top()=='(')
        {
                st.pop();
        }
    }
    }
    else{
        while(st.top()!='N' && prec(s[i])<=prec(st.top())){
        char c=st.top();
        st.pop();
        ns+=c;

        }
        st.push(s[i]);
    
    }
        while(st.top()!='N')
        {
        char c=st.top();
        ns+=c;
        st.pop();
        }
        cout<<ns;
}
