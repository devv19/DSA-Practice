#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter first number  : ";
    cin>>n;
    cout<<"Enter second number : ";
    cin>>m;
    while(n>0 && m>0){
        if(n>m) n=n%m;
        else m=m%n;
    }
    if(n==0) cout<<m;
    else cout<<n;
}