/*

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

#include<iostream>
using namespace std;
int main(){
    cout << "Enter the size" << endl;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}