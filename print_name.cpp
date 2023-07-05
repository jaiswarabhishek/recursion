#include<iostream>
using namespace std;

int cnt = 5;

void func(string name){
    if(cnt==0)
    return ;

    cnt--;

    cout<<name<<endl;
    
    func(name);
}

int main(){
    string name = "Abhishek";

    func(name);
    return 0;
}