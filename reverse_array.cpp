#include<bits/stdc++.h>

using namespace std;



void reverse(vector<int>&vec , int l,int e){
  if(l>=e)
  return;

  int temp = vec[l];
  vec[l]=vec[e];
  vec[e]=temp;

  reverse(vec,l+1,e-1);

}

int main(){

    

    int size;
    cin>>size;
    vector<int>vec;
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
      vec.push_back(ele);
    }

  
    reverse(vec,0,size-1);


     for(int i=0;i<vec.size();i++){
       cout<<vec[i]<<' ';
    }


    
    return 0;
}