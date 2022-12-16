#include <iostream>

using namespace std;

int main() {

    int batas, awal;

    cout << "masukkan nilai awal  : "; cin >> awal;
    cout << "masukkan batas akhir : "; cin >> batas;

    for (int i = awal; i <= batas; i += 2) {

        cout << i << " ";
    }
    return 0;
}