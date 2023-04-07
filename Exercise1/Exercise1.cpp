//1. Jelaskan, mengapa suatu algorithma dibutuhkan untuk menyelesaikan suatu masalah.
//  - Algoritma memiliki cara penyelesaian sebuah masalah secara struktural, efisien, dan mendetail.
//2. Dalam algorithma, di klassifikasikan menjadi 2 data struktur.Sebutkan 2 data struktur tersebut.
//  - Linear dan Binary
//3. Sebutkan faktor - faktor yang mempengaruhi mempengaruhi efisiensi suatu program algorithma!
//  - Banyaknya data
//  - Banyaknya fungsi yang dipanggil
//  - Banyaknya variable
//4. Dari 6 algorithma yang sudah dipelajari.Algortihma manakah yang paling efisien untuk mengurutkan data yang ukurannya kecil.Jelaskan kenapa anda memilih itu.
//  - Jika data yang diurutkan ukurannya kecil, maka InsertionSort merupakan cara pengurutan data yang paling efisien karena bekerja dengan cara membandingkan data yang ada di sebelahnya.
//5. Sebutkan dari algorithma yang telah dipelajari mana yang termasuk kedalam Quadratic dan mana yang termasuk kedalam Loglinear.
//  - Quadratic : BubbleSort, InsertionSort, SelectionSort.
//  - Loglinear : QuickSort, MergeSort, ShellSort.

#include <iostream>
using namespace std; 

int ers[80];
int n;

void input() {
    while (true) {
        cout << "Masukkan panjang element array :";
        cin >> n;

        if (n <= 80)
            break;
        else
            cout << "\n Maksimum panjang array adalah 80" << endl;
    }

    cout << "\n=====================" << endl;
    cout << " Enter Array Element" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "<" << (i + 1) << ">";
        cin >> ers[i];
    }
}

int main()
{
    
}

