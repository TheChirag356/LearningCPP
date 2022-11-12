#include<iostream>
using namespace std;

int main(){
    //Init the variable
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;

    for(int i = 1; i<=n;i++){
        for(int j = 1; j<= n-i;j++){
            cout << " ";
        }
        for(int j = 1; j<=2*i-1; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = n; i>=1;i--){
        for(int j = 1; j<= n-i;j++){
            cout << " ";
        }
        for(int j = 1; j<=2*i-1; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}