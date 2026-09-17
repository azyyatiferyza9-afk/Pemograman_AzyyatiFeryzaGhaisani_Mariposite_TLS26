#include <iostream>

int main() {
    std::cout << "=== PROBLEM 1: THE LAST ASTRONAUT ===\n";

    int N = 5; // Jumlah astronot
    int K = 3; // Nilai K awal

    std::cout << "Jumlah Astronot (N) : " << N << "\n";
    std::cout << "Nilai Sandi Awal (K): " << K << "\n";

    int astronot[100];
    for (int i = 0; i < N; i++) {
        astronot[i] = i + 1;
    }

    int sisa = N;
    int pos = 0;

    std::cout << "Urutan Eliminasi     : ";

    while (sisa > 1) {
        pos = (pos + K - 1) % sisa;
        int terhapus = astronot[pos];
        std::cout << terhapus << " ";

        // Geser array untuk hapus elemen
        for (int i = pos; i < sisa - 1; i++) {
            astronot[i] = astronot[i + 1];
        }
        sisa--;

        // Update K
        if (terhapus % 2 == 0) {
            K += 2;
        } else {
            K -= 1;
        }

        if (K < 2) {
            K = 2;
        }
    }

    std::cout << "\nAstronot Terakhir    : " << astronot[0] << "\n";

    return 0;
}