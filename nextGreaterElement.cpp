# include<iostream>
using namespace std;
int main(){
    int arr[]={3,7,4,1,6};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    int nge[n];
    for(int i=0;i<n;i++){
        nge[i]=-1;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                nge[i]=arr[j];
                break;
            }
            
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }

    return 0;
}