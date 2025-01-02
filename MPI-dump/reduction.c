#include <stdio.h>  // Untuk fungsi input/output
#include <stdlib.h> // Untuk fungsi malloc dan free
#include <omp.h>    // Untuk fungsi OpenMP
#include <time.h>   // Untuk fungsi waktu/random

// Konstanta program
#define ARRAY_SIZE 100000000 // Ukuran array yang akan diproses
#define THREAD_COUNT 4       // Jumlah thread yang akan digunakan

int main()
{
    printf("=== Penjumlahan Array Menggunakan Reduction  ===\n===");
    printf(" Nama: Bayu Wicaksono ===\n===");
    printf(" NIM: 23106050002 ===\n\n");
    // Deklarasi dan alokasi memori untuk array
    double *array = (double *)malloc(ARRAY_SIZE * sizeof(double));

    // Inisialisasi variabel untuk menyimpan hasil perhitungan
    double sum = 0.0;        // Variabel untuk menyimpan total
    double max_val = 0.0;    // Variabel untuk nilai maksimum
    double min_val = 1000.0; // Variabel untuk nilai minimum
    double product = 1.0;    // Variabel untuk hasil perkalian

    // Menampilkan informasi awal program
    printf("Jumlah Elemen Array: %d\n", ARRAY_SIZE);
    printf("Jumlah Thread: %d\n\n", THREAD_COUNT);

    // Inisialisasi generator angka random dan pengisian array
    srand(time(NULL));
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        array[i] = (double)(rand() % 100) / 100.0; // Menghasilkan angka 0.0-0.99
    }

    // Mencatat waktu mulai eksekusi
    double start_time = omp_get_wtime();

// Mulai region parallel dengan reduction
#pragma omp parallel num_threads(THREAD_COUNT) reduction(+ : sum) \
    reduction(max : max_val)                                      \
    reduction(min : min_val)                                      \
    reduction(* : product)
    {
        // Mendapatkan ID thread yang sedang berjalan
        int thread_id = omp_get_thread_num();

// Membagi pekerjaan ke semua thread
#pragma omp for
        for (int i = 0; i < ARRAY_SIZE; i++)
        {
            sum += array[i];        // Menghitung total
            if (array[i] > max_val) // Mencari nilai maksimum
                max_val = array[i];
            if (array[i] < min_val) // Mencari nilai minimum
                min_val = array[i];
            if (i < 10) // Mengalikan 10 elemen pertama saja
                product *= array[i];
        }

        // Menampilkan status setiap thread
        printf("Thread %d selesai\n", thread_id);
    }

    // Mencatat waktu selesai eksekusi
    double end_time = omp_get_wtime();

    // Menampilkan hasil perhitungan
    printf("\nHasil Perhitungan:\n");
    printf("Total Sum: %.2f\n", sum);
    printf("Nilai Rata-rata: %.2f\n", sum / ARRAY_SIZE);
    printf("Nilai Maximum: %.2f\n", max_val);
    printf("Nilai Minimum: %.2f\n", min_val);
    printf("Product (10 elemen pertama): %.10f\n", product);
    printf("\nWaktu Eksekusi: %.4f detik\n", end_time - start_time);

    // Pembersihan memori
    free(array);
    return 0;
}