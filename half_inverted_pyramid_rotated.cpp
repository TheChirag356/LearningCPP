#include<iostream>
using namespace std;

int main(){

    int n; //Initializing variables
    cout << "Enter the value of n: ";
    cin >> n;

    //Nested for loop and If-Else for creating half inverted pyramid 180d rotated
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=n; j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout << endl;
    }

    return 0;
}