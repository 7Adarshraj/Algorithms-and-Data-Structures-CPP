#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        int val = i%2==0 ? 1:0;

        for(int count=1; count<=i; count++){
            cout << val;
            val = 1-val;
        }

        cout << endl;

    }

    return 0;
}