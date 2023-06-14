#include <iostream>
using namespace std;

void checkToken(char token[100]){
    cout<<"==================="<<endl;
    for (int i = 0; i < 100; i++) {
        if (token[i] == '+' || token[i] == '-' || token[i] == '*' || token[i] == '/' || token[i] == '%') {
            cout << "the arithmetic operators: " << token[i] << "\n";
        }
    }
    cout<<"==================="<<endl;
    for (int i = 0; i < 100; i++) {
        if(token[i] == 'a' || token[i] == 'b' || token[i] == 'c' || token[i] == 'd' || token[i] == 'e' || token[i] == 'f' ||
           token[i] == 'g' || token[i] == 'h' || token[i] == 'i' || token[i] == 'j'  || token[i] == 'l' || token[i] == 'm' || token[i]
                                                                                                                  == 'n' || token[i] == 'o' || token[i] == 'p' || token[i] == 'q' || token[i] == 'r' || token[i] == 's' || token[i] == 't'
           || token[i] == 'u' || token[i] == 'v' || token[i] == 'x' || token[i] == 'y' || token[i] == 'z') {
            cout << "the alphabet: " << token[i] << "\n";
        }
    }
    cout<<"==================="<<endl;
    for (int i = 0; i < 100; i++) {
        if(token[i] == '!' || token[i] == '"' || token[i] == '#' || token[i] == '$' || token[i] == '&' || token[i] ==
        '\'' ||
           token[i] == '(' || token[i] == ')' || token[i] == '*' || token[i] == '+'  || token[i] == ',' || token[i]
           == '-' || token[i] == '.' || token[i] == '/' || token[i] == ':' || token[i] == ';' || token[i] == '?' ||
           token[i] == '@'
           || token[i] == '[' || token[i] == '^' || token[i] == '_' || token[i] == '`' || token[i]
           == '{' || token[i] == '|'  || token[i] == '}' || token[i] == '~') {
            cout << "the punctuation: " << token[i] << "\n";
        }
    }
}

int main() {
    char str[100];
    cout << "enter a string: ";
    cin >> str;
    checkToken(str);
    return 0;
}


