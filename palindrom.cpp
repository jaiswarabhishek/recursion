#include<bits/stdc++.h>

using namespace std;

 bool isPalindrom(string str,int i){
   if(i>=str.size()/2)
   return true;

   if(str[i]!=str[str.size()-i-1])
   return false;

   
  return  isPalindrom(str,i+1);
 
}

int main(){

   string str = "malayplam";


   if(isPalindrom(str,0))
   cout<<"Yes";
   else
   cout<<"NO";
   
    
    return 0;
}