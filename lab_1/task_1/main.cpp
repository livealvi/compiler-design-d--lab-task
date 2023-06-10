#include <iostream>
using namespace std;

int main() {
    char number;
    cout << "enter numeric constant: ";
    cin >> number;
    if((number >= '0' && number  <= '9' )){
        cout << "numeric constant" << endl;
    } else {
        cout << "not numeric" << endl;
    }
    return 0;
}
