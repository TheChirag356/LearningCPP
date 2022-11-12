#include<iostream>
using namespace std;

int main(){

    int n; //Initializing variable
    cout << "Enter the calue of n: ";
    cin >> n;


    //Nested For-Loop for making half inverted pyramid
    for(int i = n; i>=1; i--){
        for(int j = 1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}