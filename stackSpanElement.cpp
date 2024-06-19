# include<iostream>
# include<stack>
using namespace std;
int main(){
    stack<int>st;
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    ans[0]=-1;
    st.push(0);

    for(int i=1;i<n;i++){
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(!st.empty()) ans[i]=st.top();
        else ans[i]=-1;

        st.push(i);
    }

    for(int i=0;i<n;i++){
        ans[i]=i-ans[i];
    }


    

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";

    }

    return 0;
}
