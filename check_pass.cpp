#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string secret = "GMBH|D0ef_Cb4t1d~";
 
    string input;
    cout << "Nhap mat khau: ";
    cin >> input;
 
    for (char &c : input) {
        c = c + 1; 
    }

    if (input == secret) {
        cout << "Chinh xac! Ban da tim ra Flag." << endl;
    } else {
        cout << "Sai mat khau!" << endl;
    }

    return 0;
}
