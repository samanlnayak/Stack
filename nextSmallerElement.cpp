# include<iostream>
# include<stack>
using namespace std;
int main(){
    stack<int>st;
    int arr[]={4,1,2,5,4,3,4,8,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    ans[n-1]=-1;
    st.push(arr[n-1]);

    for(int i=n-2;i>=0;i--){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        if(!st.empty()) ans[i]=st.top();
        else ans[i]=-1;

        st.push(arr[i]);
    }
   
   


    

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";

    }

    return 0;
}
