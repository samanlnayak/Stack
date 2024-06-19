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

    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
        
        
        
    }
    cout<<endl;
    // printing stack in normal order 
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
       
      
    }
    cout<<endl;

    cout<<st.top();
    
    return 0;
}