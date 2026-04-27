#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int rev=0;
    int ld=0;
    int temp=abs(n);
    while (temp>0){
        ld=temp%10;
        temp=temp/10;
        rev=(rev*10)+ld;
    }
    if(n<0) rev=-rev;
    cout<<rev;
}