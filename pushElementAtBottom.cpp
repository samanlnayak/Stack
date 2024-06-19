# include<iostream>
# include<stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    int val=80;
    stack<int>temp;

    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

  
    st.push(val);

    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    // this is to display the st stack after 80 is pushed at the bottom
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}