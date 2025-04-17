import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        doublyLL doublell = new doublyLL();
        Scanner scanner = new Scanner(System.in);
        int choice;

        System.out.println("====================================");
        System.out.println("NIM: 23106050002");
        System.out.println("Name: Bayu Wicaksono");

        // Display Input and Output
        do {
            System.out.println("====================================");
            System.out.println("DOUBLE LINKED LIST MENU:");
            System.out.println("1. INSERTION");
            System.out.println("2. DELETION");
            System.out.println("3. SHOW DATA");
            System.out.println("4. EXIT");
            System.out.println("====================================");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();
            scanner.nextLine();
            System.out.println();

            switch (choice) {
                case 1:
                    System.out.println("========== INSERTION INPUT ==========");
                    System.out.print("Enter NIM: ");
                    String nim = scanner.nextLine();

                    System.out.print("Enter Name: ");
                    String nama = scanner.nextLine();

                    System.out.println("========== INSERTION MENU ==========");
                    System.out.println("1.1 INSERTION AT THE BEGINNING");
                    System.out.println("1.2 INSERTION AT THE SPECIFIC POSITION");
                    System.out.println("1.3 INSERTION AT THE END");
                    System.out.print("Enter your choice: ");
                    int insertionChoice = scanner.nextInt();
                    scanner.nextLine();

                    if (insertionChoice == 1) {
                        insertion.insertAtBeginning(doublell, nim, nama);
                    } else if (insertionChoice == 2) {
                        System.out.print("Enter position: ");
                        int position = scanner.nextInt();
                        insertion.insertAtPosition(doublell, nim, nama, position);
                    } else if (insertionChoice == 3) {
                        insertion.insertAtEnd(doublell, nim, nama);
                    } else {
                        System.out.println("Invalid choice. Please try again.");
                    }
                    System.out.println();
                    break;

                case 2:
                    System.out.println("========== DELETION MENU ==========");
                    System.out.println("2.1 DELETION AT THE BEGINNING");
                    System.out.println("2.2 DELETION AT THE SPECIFIC POSITION");
                    System.out.println("2.3 DELETION AT THE END");
                    System.out.print("Enter your choice: ");
                    int deletionChoice = scanner.nextInt();
                    scanner.nextLine();

                    if (deletionChoice == 1) {
                        deletion.deleteAtBeginning(doublell);
                    } else if (deletionChoice == 2) {
                        System.out.print("Enter position: ");
                        int position = scanner.nextInt();
                        deletion.deleteAtPosition(doublell, position);
                    } else if (deletionChoice == 3) {
                        deletion.deleteAtEnd(doublell);
                    } else {
                        System.out.println("Invalid choice. Please try again.");
                    }
                    System.out.println();
                    break;

                case 3:
                    System.out.println("========== SHOW DATA MENU ==========");
                    System.out.println("3.1 SHOW DATA FROM FRONT");
                    System.out.println("3.2 SHOW DATA FROM BACK");
                    System.out.print("Enter your choice: ");
                    int showChoice = scanner.nextInt();
                    scanner.nextLine();

                    if (showChoice == 1) {
                        System.out.println("========== SHOW DATA FROM FRONT ==========");
                        showData.showFromFront(doublell);
                    } else if (showChoice == 2) {
                        System.out.println("========== SHOW DATA FROM BACK ==========");
                        showData.showFromBack(doublell);
                    } else {
                        System.out.println("Invalid choice. Please try again.");
                    }
                    System.out.println();
                    break;

                case 4:
                    System.out.println("Exiting the program. Thank you!");
                    System.out.println();
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
                    System.out.println();
            }
        } while (choice != 4);

        scanner.close();
    }
}