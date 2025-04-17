import java.util.Scanner;
import java.util.Stack;

public class reversingWords {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String choice;

        // Menampilkan judul program
        System.out.println("=============================================");
        System.out.println("PROGRAM UNTUK MEMBALIKKAN KATA DALAM KALIMAT");
        System.out.println("=============================================");
        System.out.println("NAMA: BAYU WICAKSONO");
        System.out.println("NIM: 23106050002");
        System.out.println("=============================================");
        System.out.println();

        do {
            // Meminta user untuk memasukkan kalimat
            System.out.println("=============== INPUT KALIMAT ===============");
            System.out.print("Input sentence: ");
            String sentence = scanner.nextLine().trim(); // Membaca input dan menghapus spasi di awal/akhir
            System.out.println("=============================================");
            System.out.println("");

            // Deklarasi variabel untuk membalikkan kata
            String reversedSentence = reverseWords(sentence);

            // Menampilkan hasil dengan batasan
            System.out.println("=============== OUTPUT KALIMAT ==============");
            System.out.println("Original sentence: " + sentence);
            System.out.println("Reversed sentence: " + reversedSentence);
            System.out.println("=============================================");
            System.out.println("");

            // Menanyakan apakah user ingin melanjutkan
            System.out.print("Apakah Anda ingin membalikkan kata lagi? (y/n): ");
            choice = scanner.nextLine().trim().toLowerCase(); // Membaca pilihan user dan mengubahnya menjadi huruf
                                                              // kecil
            System.out.println();

        } while (choice.equals("y")); // Ulangi jika user memilih "y"

        System.out.println("Terima kasih telah menggunakan program ini!");
        scanner.close();
    }

    /**
     * Metode untuk membalikkan kata dalam sebuah kalimat menggunakan Stack
     * 
     * @param sentence Kalimat yang akan dibalik
     * @return Kalimat dengan urutan kata yang dibalik
     */
    public static String reverseWords(String sentence) {
        // Membuat Stack untuk menyimpan kata-kata
        Stack<String> stack = new Stack<>();

        // Memisahkan kalimat menjadi kata-kata menggunakan spasi sebagai pemisah
        String[] words = sentence.split(" ");

        // Memasukkan setiap kata ke dalam Stack
        for (String word : words) {
            stack.push(word); // Push kata ke dalam Stack
        }

        // Membuat StringBuilder untuk menyusun kembali kalimat yang dibalik
        StringBuilder reversedSentence = new StringBuilder();

        // Mengeluarkan kata-kata dari Stack satu per satu
        while (!stack.isEmpty()) {
            reversedSentence.append(stack.pop()); // Pop kata dari Stack
            if (!stack.isEmpty()) {
                reversedSentence.append(" "); // Menambahkan spasi antar kata
            }
        }

        // Mengembalikan kalimat yang sudah dibalik
        return reversedSentence.toString(); // Mengembalikan kalimat yang sudah dibalik
    }
}
