#include <stdio.h>   // Header file untuk fungsi input/output standar
#include <stdlib.h>  // Header file untuk fungsi umum seperti malloc dan rand
#include <omp.h>     // Header file untuk OpenMP, digunakan untuk paralelisme
#include <time.h>    // Header file untuk fungsi waktu, digunakan untuk pengukuran waktu

#define SIZE 100000000  // Ukuran array
#define REPEAT 10       // Jumlah pengulangan untuk benchmark
#define THRESHOLD 1000000  // Ambang batas untuk beralih ke metode iteratif

// Fungsi rekursif untuk menghitung jumlah elemen array secara serial
double serial_sum_recursive(double* arr, int start, int end) {
    if (end - start <= THRESHOLD) {
        // Kasus dasar: gunakan jumlah iteratif untuk potongan kecil
        double sum = 0.0;
        for (int i = start; i < end; i++) {
            sum += arr[i];
        }
        return sum;
    } else {
        // Kasus rekursif: bagi array menjadi dua
        int mid = (start + end) / 2;
        return serial_sum_recursive(arr, start, mid) + serial_sum_recursive(arr, mid, end);
    }
}

// Fungsi rekursif untuk menghitung jumlah elemen array secara paralel
double parallel_sum_recursive(double* arr, int start, int end) {
    if (end - start <= THRESHOLD) {
        // Kasus dasar: gunakan jumlah iteratif untuk potongan kecil
        double sum = 0.0;
        for (int i = start; i < end; i++) {
            sum += arr[i];
        }
        return sum;
    } else {
        // Kasus rekursif: bagi array menjadi dua
        int mid = (start + end) / 2;
        double left_sum, right_sum;
        
        // Buat tugas paralel untuk bagian kiri
        #pragma omp task shared(left_sum) if(end - start > THRESHOLD * 10)
        left_sum = parallel_sum_recursive(arr, start, mid);
        
        // Buat tugas paralel untuk bagian kanan
        #pragma omp task shared(right_sum) if(end - start > THRESHOLD * 10)
        right_sum = parallel_sum_recursive(arr, mid, end);
        
        // Tunggu semua tugas selesai
        #pragma omp taskwait
        return left_sum + right_sum;
    }
}

int main() {
    // Alokasikan memori untuk array
    printf("===============================\n");
    printf("Comparison Serial vs Parallel\n");
    printf("===============================\n");

    double* arr = (double*)malloc(SIZE * sizeof(double));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = (double)rand() / RAND_MAX;  // Isi array dengan nilai acak
    }

    double serial_time = 0.0, parallel_time = 0.0;  // Variabel untuk menyimpan waktu eksekusi
    double serial_result, parallel_result;  // Variabel untuk menyimpan hasil perhitungan

    // Pemanasan (warm-up)
    serial_result = serial_sum_recursive(arr, 0, SIZE);
    #pragma omp parallel
    {
        #pragma omp single
        parallel_result = parallel_sum_recursive(arr, 0, SIZE);
    }

    // Benchmark
    for (int i = 0; i < REPEAT; i++) {
        clock_t start = clock();  // Mulai pengukuran waktu
        serial_result = serial_sum_recursive(arr, 0, SIZE);
        serial_time += (double)(clock() - start) / CLOCKS_PER_SEC;  // Hitung waktu eksekusi serial

        start = clock();  // Mulai pengukuran waktu
        #pragma omp parallel
        {
            #pragma omp single
            parallel_result = parallel_sum_recursive(arr, 0, SIZE);
        }
        parallel_time += (double)(clock() - start) / CLOCKS_PER_SEC;  // Hitung waktu eksekusi paralel
    }

    // Cetak hasil
    printf("Serial Result: %f\n", serial_result);
    printf("Parallel Result: %f\n", parallel_result);
    printf("Average Serial Time: %f seconds\n", serial_time / REPEAT);
    printf("Average Parallel Time: %f seconds\n", parallel_time / REPEAT);
    printf("Speedup: %f\n", serial_time / parallel_time);

    // Bebaskan memori
    free(arr);
    return 0;
}