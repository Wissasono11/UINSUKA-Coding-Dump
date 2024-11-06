#include <stdio.h>
#include <omp.h>

void displayMessage() {
    int threadNum = omp_get_thread_num();
    printf("Hello from thread %d\n", threadNum);
}

int main() {
    #pragma omp parallel num_threads(5)
    {
        displayMessage();
    }

    return 0;
}