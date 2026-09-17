#include <iostream>

// User-Defined Function manual untuk menghitung panjang string
int hitungPanjang(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void problem2() {
    std::cout << "========================================\n";
    std::cout << "PROBLEM 2: ALIEN-IN-THE-MIDDLE\n";
    std::cout << "========================================\n";

    // Teks langsung dimasukkan ke variabel tanpa perlu input cin
    const char pesan[] = "ALIENS"; 
    char hasil[100];
    
    int len = hitungPanjang(pesan);
    int prev = 0;

    for (int i = 0; i < len; i++) {
        char c = pesan[i];

        if (c >= 'A' && c <= 'Z') {
            int pos_asal = c - 'A' + 1;
            int pos_baru = (pos_asal + prev - 1) % 26 + 1;
            hasil[i] = (char)(pos_baru + 'A' - 1);
            prev = pos_asal;
        } else {
            hasil[i] = c;
        }
    }
    hasil[len] = '\0';

    std::cout << "Pesan Asli     : " << pesan << "\n";
    std::cout << "Pesan Enkripsi : " << hasil << "\n";
    std::cout << "========================================\n";
}

int main() {
    problem2();
    return 0;
}