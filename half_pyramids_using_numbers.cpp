#include<iostream>
using namespace std;

int main(){

    int n; //Initializing variable
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;

    //For Loop for creating half pyramids
    for(int i=1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }

    return 0;
}