#include<bits/stdc++.h>
using namespace std;

void f(int arr[] , vector<int>&ds,int n ,int idx){

    if(idx>=n){
        for(auto it : ds)
        cout<<it<<' ';
        cout<<endl;

        if(ds.size()==0)
        cout<<"[ ]";

        return;
    }

    ds.push_back(arr[idx]);
    f(arr,ds,n,idx+1);
    ds.pop_back();
    f(arr,ds,n,idx+1);

}

int main(){
    int arr[]={1,2,3,4,5,6};
     vector<int>ds;
       int n=6;
    f(arr,ds,n,0);

    return 0;
}