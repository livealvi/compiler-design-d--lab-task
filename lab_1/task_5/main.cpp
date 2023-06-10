#include <iostream>
using namespace std;

int main() {
    int size, i;
    float num[100], sum=0.0, avg;
    cout << "enter the size of array: ";
    cin >> size;

    while (size > 100 || size <= 0){
        cout << "out of range\n";
        cin >> size;
    }
    for(i=0; i < size; ++i){
        cout << size << " out of " << i+1 << ", enter the number: ";
        cin >> num[i];
        sum +=num[i];
    }
    avg = sum / size;
    cout << "average value: "<< avg;
    return 0;
}
