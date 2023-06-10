#include <iostream>
using namespace std;

bool check(char operators ) {
    if (operators == '+' || operators == '-' || operators == '*' || operators == '/' || operators == '%' || operators == '=')
        return true;
    else
        return false;
}

int main() {
    char input;
    cout << "enter input character: ";
    cin >> input;
    if (check(input))
        cout << "input is an operator." << endl;
    else
        cout << "input is not an operator." << endl;
    return 0;
}
