# include<iostream>
# include<stack>

using namespace std;
void printStack(stack<int> st){

}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

 
    while(st.size()>=0){
        cout<<st.top()<<" ";
        st.pop();
        
    }
    // the problem with this code is along with printing we are emptying the stack also
    return 0;
}