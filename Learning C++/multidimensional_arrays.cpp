#include <iostream>
using namespace std;

int main (){

    string a[2][3] = {
        {"fox", "dog", "cat"},
        {"mouse", "squirrel", "parrot"}
    };

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << a[i][j] << " " << flush;
        }

        cout << endl;
    }

    return 0;
}