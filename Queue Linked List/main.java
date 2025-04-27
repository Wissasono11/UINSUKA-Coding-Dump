import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Queue queue = new Queue();
        Scanner scanner = new Scanner(System.in);

        // Informasi NIM dan Nama
        System.out.println("====================================");
        System.out.println("Program Antrian (Queue)");
        System.out.println("NIM  : 23106050002");
        System.out.println("Nama : Bayu Wicaksono");
        System.out.println("====================================");

        while (true) {
            System.out.println("\n====================================");
            System.out.println("               MENU                 ");
            System.out.println("====================================");
            System.out.println("1. Tambah Antrean");
            System.out.println("2. Panggil Antrean");
            System.out.println("3. Cetak Antrean");
            System.out.println("4. Keluar");
            System.out.println("====================================");
            System.out.print("Pilih menu (1-4): ");
            String choice = scanner.nextLine();
            System.out.println("====================================");

            switch (choice) {
                case "1":
                    System.out.print("Masukkan nama pengantre: ");
                    String name = scanner.nextLine();
                    queue.enqueue(name);
                    System.out.println("\n" + name + " telah ditambahkan ke antrean.");
                    break;

                case "2":
                    String called = queue.dequeue();
                    if (called != null) {
                        System.out.println("\n" + called + " silakan menuju loket.");
                    } else {
                        System.out.println("\nAntrean kosong, tidak ada yang dapat dipanggil.");
                    }
                    break;

                case "3":
                    System.out.println("\nAntrean saat ini:");
                    System.out.println("------------------------------------");
                    queue.printQueue();
                    System.out.println("------------------------------------");
                    break;

                case "4":
                    System.out.println("\nKeluar dari program. Terima kasih!");
                    scanner.close();
                    return;

                default:
                    System.out.println("\nPilihan tidak valid. Silakan pilih lagi.");
            }
        }
    }
}
