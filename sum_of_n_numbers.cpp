#include <bits/stdc++.h>
using namespace std;

int sum_of_n(int n){
  if(n==0)
  return 0;

  return n+sum_of_n(n-1);
    
}

int main(){
    int n;
    cin>>n;

 int ans=  sum_of_n(n);
    
   cout<<ans;

    return 0;
}