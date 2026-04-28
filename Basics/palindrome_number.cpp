#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ld=0;
    int rev=0;
    int temp=abs(n);
    while(temp>0){
        ld=temp%10;
        temp=temp/10;
        rev=(rev*10)+ld;
    }
    if(rev==n) cout<<"Palindrome";
    else cout<<"Not Palindrome";
}