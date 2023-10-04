#include <iostream>
using namespace std;

int main() {
    int input_number; // deklarasi variabel input_number
    cout<<"input_number = "; // menampilkan pesan untuk meminta input dari pengguna
    cin>>input_number; // menerima input dari pengguna
    for (int i = 1; i <= input_number; i++) { // melakukan perulangan dari 1 hingga input_number
        cout << "Current Number is " << i << " and the cube is " << i * i * i << endl; // menampilkan pesan yang berisi nomor saat ini dan kubusnya
    }
    return 0; // mengembalikan nilai 0 jika program berjalan dengan sukses
}
