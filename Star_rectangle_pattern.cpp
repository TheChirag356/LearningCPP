#include<iostream>
using namespace std;

int main(){
    
    cout << "Printing Rectangle" << endl;
    cout << endl;

    //Initializing variables.
    int rows, columns;

    //Getting the value of the variables.
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    //Nested For-Loop for printing the star pattern.
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}