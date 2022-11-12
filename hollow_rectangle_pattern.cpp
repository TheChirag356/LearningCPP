#include <iostream>
using namespace std;

int main(){
    //Taking input
    int row, column; //Initializing variables
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> column;


    //Nested For-Loops and If ElseIf Else Loop for printing the pattern
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(i == 0 || i == row-1){
                cout << "*";
            }
            else if(j == 0 || j == column-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}