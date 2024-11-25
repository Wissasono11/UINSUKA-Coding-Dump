#include <stdio.h>
#include <omp.h>

// Fungsi untuk melakukan pekerjaan pada setiap task
void do_work(int task_id) {
    printf("Task %d is being processed by thread %d\n", task_id, omp_get_thread_num());
}

int main() {
    // Menampilkan informasi
    printf("===Task decomposition with locks\n===");
    printf("Nama: Bayu Wicaksono\n===");
    printf("NIM: 23106050002\n\n");

    // Inisialisasi variabel
    int num_tasks = 10;
    omp_lock_t lock;

    // Inisialisasi lock
    omp_init_lock(&lock);

    // Parallel region dengan task decomposition
    #pragma omp parallel
    {
        // Membuat task
        #pragma omp single
        {
            for (int i = 0; i < num_tasks; i++) {
                #pragma omp task
                {
                    // Mengunci sebelum melakukan pekerjaan
                    omp_set_lock(&lock);
                    do_work(i);
                    // Membuka kunci setelah pekerjaan selesai
                    omp_unset_lock(&lock);
                }
            }
        }
    }

    // Menghancurkan lock
    omp_destroy_lock(&lock);
    
    return 0;
}