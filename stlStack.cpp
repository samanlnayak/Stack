# include<iostream>
# include<stack>

using namespace std;

int main(){
    stack<int>st;
    st.push(10);
    st.push(10);
    st.push(11);
    st.push(10);
    st.pop();
    cout<<st.top();
    cout<<endl;
    cout<<st.size();
    return 0;
}