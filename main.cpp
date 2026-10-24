#include <iostream>
using namespace std;

int main() {
    int nilai;
    string ulang;

    do {
        cout << "masukkan nilai" << endl;
        cin >> nilai;

        if (nilai > 90) {
            cout << "nilai A" << endl;
        }
        else if (nilai > 80) {
            cout << "nilai B" << endl;
        }
        else if (nilai > 70) {
            cout << "nilai C" << endl;
        }
        else {
            cout << "nilai D" << endl;
        }

        cout << "anda mau mengulang tekan y atau Y";
        cin >> ulang;

    } while (ulang == "y" || ulang == "Y");

    system("pause");
    return 0;
}
