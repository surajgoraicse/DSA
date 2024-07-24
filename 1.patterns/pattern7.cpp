/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

#include<iostream>
using namespace std;
int main(){
    cout << "enter the size" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        for (int j = n-i; j > 1; j--){
            cout << "  ";
        }
        for (int k = 1; k <= i * 2 + 1; k++){
            cout << "* ";
        }

            cout << endl;
    }
}