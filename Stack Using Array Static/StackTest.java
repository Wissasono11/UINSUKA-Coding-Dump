public class StackTest {
    private char[] stack;
    private int top;
    private int capacity;

    // Constructor untuk inisialisasi stack
    public StackTest(int size) {
        stack = new char[size];
        capacity = size;
        top = -1;
    }

    // Menambahkan elemen ke stack
    public void push(char data) {
        if (isFull()) {
            System.out.println("Stack overflow! Tidak dapat menambahkan elemen: " + data);
            return;
        }
        stack[++top] = data;
    }

    // Menghapus elemen dari stack
    public char pop() {
        if (isEmpty()) {
            System.out.println("Stack underflow! Tidak ada elemen untuk dihapus.");
            return '\0';
        }
        return stack[top--];
    }

    // Melihat elemen di atas stack
    public char peek() {
        if (isEmpty()) {
            System.out.println("Stack kosong! Tidak ada elemen di atas.");
            return '\0';
        }
        return stack[top];
    }

    // Mengecek apakah stack kosong
    public boolean isEmpty() {
        return top == -1;
    }

    // Mengecek apakah stack penuh
    public boolean isFull() {
        return top == capacity - 1;
    }

    // Menampilkan elemen-elemen dalam stack
    public void display() {
        if (isEmpty()) {
            System.out.println("Stack kosong!");
            return;
        }
        System.out.println("Elemen dalam stack:");
        for (int i = top; i >= 0; i--) {
            System.out.println(stack[i]);
        }
    }

    public static void main(String[] args) {
        StackTest stack = new StackTest(8); // Ukuran stack sesuai jumlah huruf "KALIJAGA"

        // Push huruf-huruf dari "KALIJAGA"
        stack.push('K');
        stack.push('A');
        stack.push('L');
        stack.push('I');
        stack.push('J');
        stack.push('A');
        stack.push('G');
        stack.push('A');

        // Menampilkan elemen dalam stack
        stack.display();

        // Pop semua elemen untuk melihat urutan keluarnya dalam satu baris
        System.out.print("Menghapus elemen dari stack: ");
        while (!stack.isEmpty()) {
            System.out.print(stack.pop() + " ");
        }
        System.out.println(); // Pindah ke baris baru setelah selesai
    }
}
