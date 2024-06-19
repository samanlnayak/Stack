# include<iostream>
# include<stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    stack<int>gt;
    stack<int>copy;
    // now st is empty and gt is full in reverse order
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    // now displying the gt stack
    // while(gt.size()>0){
    //     cout<<gt.top()<<" ";
    //     gt.pop();
    // }

    // now copying element from gt to copy stack
    while(gt.size()>0){
        copy.push(gt.top());
        gt.pop();
    }
    //it to check if the elements are copied to the copy stack or not
    while(copy.size()>0){
        cout<<copy.top()<<" ";
        copy.pop();
    }
}