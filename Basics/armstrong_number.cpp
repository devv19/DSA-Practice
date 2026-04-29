#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ld=0;
    int count=0;
    int temp=n;
    int armstrong = 0;
    while(temp>0){
        temp=temp/10;
        count++;
    }
    if(n==0) count = 1;
    int org = n;
    while(org>0){
        ld=org%10;
        armstrong=armstrong+pow(ld,count);
        org=org/10;
    }
    cout<<"Result : "<<armstrong<<endl;
    if(armstrong==n){
        cout<<"Armstrong Number";
    }
    else cout<<"Not Armstrong Number";
}