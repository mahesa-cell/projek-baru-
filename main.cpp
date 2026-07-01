#include <iostream>

using namespace std;
int main() {
    float a,b,hasil;
    char aritmatika;

    cout << "selamat datang di kalkulator \n \n";
    // masukkan inputannya
    cout << "nilai pertama: ";
    cin >> a ;
    cout << "pilih operator +,-,*,/: ";
    cin >> aritmatika;
    cout << "masukkan nilai kedua: ";
    cin >> b;

    cout << "\n hasil : ";
    cout << a << aritmatika << b;

if (aritmatika == '+') {
    hasil = a + b;
}else if (aritmatika == '-') {
    hasil = a - b;
}else if (aritmatika == '*') {
    hasil = a * b;
}else if (aritmatika == '/') {
    hasil = a / b;
}else {
    cout << "operasional salah" << endl;
}
    cout << " = " << hasil << endl;
cin.get();
    return 0;





}
