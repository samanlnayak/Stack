# include<iostream>
# include<stack>
using namespace std;

void displayRec(stack<int>&st){

    if(st.size()==0){
        return ;
    }

    int x=st.top();
    st.pop();

    displayRec(st);

    cout<<x<<" ";

    st.push(x);
}

void push_at_botton(stack<int>&st, int x){
    if(st.size()==0){
        st.push(x);
        return ;
    }

    int temp=st.top();
    st.pop();
    push_at_botton(st,x);

    st.push(temp);
}
void reverse(stack<int>&st){

    if(st.size()==1){
        return;
    }

    int temp=st.top();
    st.pop();

    reverse(st);

    push_at_botton(st,temp);

}

int main(){
    stack<int>st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);


   


    return 0;


   
}