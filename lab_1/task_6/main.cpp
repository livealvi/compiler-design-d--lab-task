#include <iostream>
#define SIZE 10
using  namespace std;

int main() {
    int array[SIZE];
    int i, max, min, size;
    cout << "enter size(max 10) of the array: ";
    cin >> size;
    for (i = 0; i < size; i++) {
        cout << "enter " << size << " out of " <<  i+1 << " elements in the array: ";
        cin >> array[i];
    }
    max = array[0];
    min = array[0];
    for (i = 1; i < size; i++){
        if (array[i] > max)
            max = array[i];
        if (array[i] < min)
            min = array[i];
    }
    cout << "====================";
    cout << "\nmin element = " << max <<"\n";
    cout << "max element = " << min;
    return 0;
}
