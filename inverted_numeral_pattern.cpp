#include<iostream>
using namespace std;

int main(){

    int n; //Initializing the variables
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;

    //For-Loop for creating the pattern
    for(int i = 1;i <= n; i++){
        for(int j = 1; j <= (n+1)-i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}