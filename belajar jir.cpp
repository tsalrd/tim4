#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    // Mengambil input dari pengguna
    printf("Masukkan teks: ");
    fgets(input, sizeof(input), stdin);

    // Menghapus karakter newline (\n) jika ada
    input[strcspn(input, "\n")] = 0;

    // Menampilkan hasil setelah newline dihapus
    printf("Teks yang dimasukkan: %s\n", input);

    return 0;
}
