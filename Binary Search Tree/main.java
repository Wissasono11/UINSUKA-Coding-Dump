import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        BST bst = new BST();
        int choice;

        do {
            System.out.println("MENU:");
            System.out.println("1. Masukkan 11 data angka antara 10-99 yang berbeda-beda ");
            System.out.println("2. Tampilkan data secara urut");
            System.out.println("3. Keluar");
            System.out.print("Pilih menu: ");
            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Masukkan 11 data angka antara 10-99 yang berbeda-beda:");
                    for (int i = 0; i < 11; i++) {
                        int num;
                        while (true) {
                            System.out.print("Data ke-" + (i + 1) + ": ");
                            num = scanner.nextInt();
                            if (num >= 10 && num <= 99) {
                                bst.insert(num);
                                break;

                            } else {
                                System.out.println("Data harus antara 10-99. Silakan coba lagi.");
                            }
                        }
                    }
                    System.out.println("Data berhasil dimasukkan ke dalam BST.");
                    break;

                case 2:
                    System.out.println("Data secara urut adalah:");
                    bst.inorder();
                    System.out.println();
                    break;

                case 3:
                    System.err.println("Keluar dari program.");
                    break;

                default:
                    System.out.println("Pilihan tidak valid. Silakan coba lagi.");
                    break;
            }
        } while (choice != 3);
        scanner.close();
    }
}
