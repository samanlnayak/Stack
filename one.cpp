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

int main(){
    stack<int>st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);


    displayRec(st);

    cout<<endl;
    while(st.size()>0){

        cout<<st.top()<<" ";

        st.pop();
    }



    return 0;


   
}