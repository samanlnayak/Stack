# include<iostream>
# include<stack>
using namespace std;
int main(){
    string s="abcd&&!!!!";
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if( st.empty()|| s[i]!=st.top()){
            st.push(s[i]);
        }
    }
    string ans="";

    while(!st.empty()){
        ans=st.top()+ans;
        st.pop();
    }

    cout<<ans;
    return 0;
}