#include<iostream>
using namespace std;

int main(){

    int n; //Initializing variable
    cout << "Enter the value of n: ";
    cin >> n;

    //Loop for upper pattern
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        int spaces = 2*n - 2*i;
        for(int j = 1;j<=spaces;j++){
            cout << " ";
        }
        for(int j = 1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }

    //Loop for the lower part of the pattern
    for(int i = n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        int spaces = 2*n - 2*i;
        for(int j = 1;j<=spaces;j++){
            cout << " ";
        }
        for(int j = 1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}