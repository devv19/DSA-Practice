#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    if(n <= 0){
        cout << "Enter a positive number";
        return 0;
    }

    vector<int> ls;

    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            ls.push_back(i);

            if(n / i != i)
                ls.push_back(n / i);
        }
    }

    sort(ls.begin(), ls.end());

    cout << "Divisors of " << n << " are: ";
    for(int x : ls){
        cout << x << " ";
    }

    return 0;
}