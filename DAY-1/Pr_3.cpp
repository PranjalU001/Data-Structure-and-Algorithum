#include<iostream>
using namespace std;
int main(){
    char ch ;
    cin>>ch;
    if(ch>='A'&&ch<='Z'){
        cout<<"It is in UpperCase";
    }
    else if(ch>='a'&&ch<='z'){
        cout<<"It is in LowerCase";
    }
    else if(ch>='0'&&ch<='9'){
        cout<<"It is in Numerical";
    }
    else{
        cout<<"It is in Special Character";
    }
}