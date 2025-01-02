#include <stdio.h>  // Library untuk input/output
#include <stdlib.h> // Library untuk fungsi malloc dan free
#include <omp.h>    // Library untuk OpenMP
#include <time.h>   // Library untuk fungsi waktu

// Fungsi untuk menggabungkan dua sub-array yang telah diurutkan
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1; // Ukuran sub-array kiri
    int n2 = r - m;     // Ukuran sub-array kanan

    // Membuat array sementara untuk menyimpan sub-array
    int L[n1], R[n2];

    // Menyalin data ke array sementara L[] dan R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Inisialisasi indeks untuk array L, R, dan array gabungan
    i = 0; // Indeks array kiri
    j = 0; // Indeks array kanan
    k = l; // Indeks array utama

    // Menggabungkan array L dan R kembali ke arr[]
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Menyalin sisa elemen L[] jika ada
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Menyalin sisa elemen R[] jika ada
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi merge sort dengan implementasi parallel menggunakan OpenMP
void mergeSort_parallel(int arr[], int l, int r)
{
    if (l < r)
    {                            // Kondisi basis untuk rekursi
        int m = l + (r - l) / 2; // Menghitung titik tengah array

// Membuat sections parallel untuk pembagian array
#pragma omp parallel sections
        {
// Section pertama untuk mengurutkan bagian kiri array
#pragma omp section
            {
                mergeSort_parallel(arr, l, m);
            }

// Section kedua untuk mengurutkan bagian kanan array
#pragma omp section
            {
                mergeSort_parallel(arr, m + 1, r);
            }
        }

        // Menggabungkan hasil pengurutan
        merge(arr, l, m, r);
    }
}

// Fungsi untuk mencetak array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Fungsi utama
int main()
{
    printf("=== Merge Sort Parallel Menggunakan Depth Recursion ===\n===");
    printf(" Nama: Bayu Wicaksono ===\n===");
    printf(" NIM: 23106050002 ===\n\n");

    int arr_size = 1000; // Ukuran array
    // Alokasi memori dinamis untuk array
    int *arr = (int *)malloc(arr_size * sizeof(int));

    // Inisialisasi generator angka random
    srand(time(NULL));
    // Mengisi array dengan angka random
    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = rand() % 1000;
    }

    printf("Array sebelum sorting:\n");
    printArray(arr, arr_size);

    // Mencatat waktu mulai
    double start_time = omp_get_wtime();

// Memulai parallel region untuk merge sort
#pragma omp parallel
    {
#pragma omp single
        mergeSort_parallel(arr, 0, arr_size - 1);
    }

    // Mencatat waktu selesai
    double end_time = omp_get_wtime();

    printf("\nArray setelah sorting:\n");
    printArray(arr, arr_size);
    printf("\nWaktu eksekusi: %f detik\n", end_time - start_time);

    // Membersihkan memori
    free(arr);
    return 0;
}