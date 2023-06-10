#include <iostream>
using namespace std;

int main() {
    string firstName;
    string lastName;
    cout << "enter first name: ";
    cin >> firstName;
    cout << "enter last name: ";
    cin >> lastName;
    cout << "========================"<< endl;
    cout << "full name: "<< firstName + " " + lastName;
    return 0;
}
