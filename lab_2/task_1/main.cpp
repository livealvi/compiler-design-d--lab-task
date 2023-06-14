#include <iostream>
using namespace std;
int number;

void checkToken(char token[number]){
    int arithmeticCount=0, alphabetCount=0, punctuationCount=0, numberCount=0;
    for (int i = 0; i < number; i++) {
        if (token[i] == '+' || token[i] == '-' || token[i] == '*' || token[i] == '/' || token[i] == '%') {
            arithmeticCount++;
            cout << arithmeticCount << ")"<< " arithmetic: " << token[i] << "\n";
        }
    }
    if (arithmeticCount >=1)  cout << "-------------------\ntotal arithmetics: " << arithmeticCount << "\n"
    << endl;
    for (int i = 0; i < number; i++) {
        if (token[i] == '0' || token[i] == '1' || token[i] == '2' || token[i] == '3' || token[i] == '4' || token[i] == '5' ||
        token[i] == '6' || token[i] == '7' || token[i] == '8' || token[i] == '9') {
            numberCount++;
            cout << numberCount << ")"<< " number: " << token[i] << "\n";
        }
    }
    if (numberCount >=1)  cout << "-------------------\ntotal numbers: " << numberCount << "\n" << endl;
    for (int i = 0; i <= number; i++) {
        if(token[i] == 'a' || token[i] == 'b' || token[i] == 'c' || token[i] == 'd' || token[i] == 'e' || token[i] == 'f' ||
           token[i] == 'g' || token[i] == 'h' || token[i] == 'i' || token[i] == 'j'  || token[i] == 'l' || token[i] == 'm' || token[i]
           == 'n' || token[i] == 'o' || token[i] == 'p' || token[i] == 'q' || token[i] == 'r' || token[i] == 's' || token[i] == 't'
           || token[i] == 'u' || token[i] == 'v' || token[i] == 'x' || token[i] == 'y' || token[i] == 'z') {
            alphabetCount++;
            cout << alphabetCount << ")"<< " alphabet: " << token[i] << "\n";
        }
    }
    if (alphabetCount >=1)  cout << "-------------------\ntotal alphabets: " << alphabetCount << "\n" << endl;
    for (int i = 0; i < number; i++) {
        if(token[i] == '!' || token[i] == '"' || token[i] == '#' || token[i] == '$' || token[i] == '&' || token[i] ==
        '\'' || token[i] == '(' || token[i] == ')' || token[i] == '*' || token[i] == '+'  || token[i] == ',' || token[i]
           == '-' || token[i] == '.' || token[i] == '/' || token[i] == ':' || token[i] == ';' || token[i] == '?' ||
           token[i] == '@' || token[i] == '[' || token[i] == '^' || token[i] == '_' || token[i] == '`' || token[i]
           == '{' || token[i] == '|'  || token[i] == '}' || token[i] == '~') {
            punctuationCount++;
            cout << punctuationCount << ")"<< " punctuation: " << token[i] << "\n";
        }
    }
    if (punctuationCount >=1)  cout << "-------------------\ntotal punctuations: " << punctuationCount << "\n\n" <<endl;
}

int main() {
    char str[100];
    cout << "\nenter a expression: ";
    cin >> str;
    number = strlen(str);
    cout <<"\nexpression characters are: ";
    for (int i = 0; i < number; i++) {
        cout << " "<<str[i] <<" ";
    }
    cout << "\ntotal expression characters: " << number<<"\n\n";
    checkToken(str);
    return 0;
}


