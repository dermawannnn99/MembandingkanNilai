#include <iostream>
using namespace std;

    void bandingkan (int *x, int *y)
    {

    int c;
        if (*x < *y)
        {
            c = *x;
            *x = *y;
            *y = c;
        }
    }

    int main () {
        int a, b;

        cout << "---Masukan Inputan nya---" << endl << endl;
        cout << "Nilai Pertama nya : ";
        cin >> a;
        cout << "Nilai Kedua nya   : ";
        cin >> b;

        bandingkan (&a, &b);
        cout << "Hasilnya : " << a << " - " << b << endl;

        return 0;

    }
