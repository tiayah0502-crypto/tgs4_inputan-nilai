#include <iostream>
#include <string> 
using namespace std;

int main()
{
    float nilai;
    string ulang;

    do{
        cout<< "masukan nilai ";
        cin >> nilai;

        if (nilai > 90) { 
            cout << "hasil grade : A" << endl;
        }
        else if (nilai > 80) {
            cout << "hasil grade : B" << endl;
        }
        else if (nilai > 70) {
            cout << "hasil grade : C" << endl;
        }
        else {
            cout << "hasil grade : D" << endl;
        }
        cout << "========================================" << endl;
        cout << "apakah anda mau mengulangi. tekan Y atay y : ";
        cin >> ulang;
        cout << endl;
    } while (ulang == "y" || ulang == "Y");
return 0;
}

