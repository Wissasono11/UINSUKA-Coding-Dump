import java.util.Scanner;

public class input {
    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        Scanner input = new Scanner(System.in);
        int pilihan;
        String nim, nama, targetnim;

        do {
            System.out.println("\n=======================================");
            System.out.println("              MAIN MENU                ");
            System.out.println("=======================================");
            System.out.println("1. Insertion");
            System.out.println("2. Deletion");
            System.out.println("3. Show Data");
            System.out.println("4. Exit");
            System.out.print("Enter your choice [1-4]: ");
            pilihan = input.nextInt();
            input.nextLine(); // consume newline character

            if (pilihan == 1) {
                System.out.println("\n========== INSERTION MENU ==========");
                System.out.print("Enter NIM: ");
                nim = input.nextLine();
                System.out.print("Enter Name: ");
                nama = input.nextLine();

                System.out.println("\nChoose Insertion Type:");
                System.out.println("1. Insert at the Beginning");
                System.out.println("2. Insert at the End");
                System.out.println("3. Insert at Specific Position");
                System.out.print("Enter your choice [1-3]: ");
                int insertChoice = input.nextInt();
                input.nextLine(); // consume newline

                if (insertChoice == 1) {
                    list.insertion.insertAtBeginning(nim, nama);
                    System.out.println("Data inserted at the beginning.");
                } else if (insertChoice == 2) {
                    list.insertion.insertAtEnd(nim, nama);
                    System.out.println("Data inserted at the end.");
                } else if (insertChoice == 3) {
                    System.out.print("Enter the target NIM after which to insert: ");
                    targetnim = input.nextLine();
                    list.insertion.insertAtSpecific(nim, nama, targetnim);
                    System.out.println("Data inserted after NIM " + targetnim + ".");
                } else {
                    System.out.println("Invalid choice for insertion. Please try again.");
                }
            } else if (pilihan == 2) {
                System.out.println("\n========== DELETION MENU ==========");
                System.out.println("1. Delete from the Beginning");
                System.out.println("2. Delete from the End");
                System.out.println("3. Delete Specific Data");
                System.out.print("Enter your choice [1-3]: ");
                int deleteChoice = input.nextInt();
                input.nextLine(); // consume newline

                if (deleteChoice == 1) {
                    list.deletion.deleteAtBeginning();
                    System.out.println("Data deleted from the beginning.");
                } else if (deleteChoice == 2) {
                    list.deletion.deleteAtEnd();
                    System.out.println("Data deleted from the end.");
                } else if (deleteChoice == 3) {
                    System.out.print("Enter the NIM of the data to delete: ");
                    targetnim = input.nextLine();
                    list.deletion.deleteNode(targetnim);
                    System.out.println("Data with NIM " + targetnim + " deleted.");
                } else {
                    System.out.println("Invalid choice for deletion. Please try again.");
                }
            } else if (pilihan == 3) {
                System.out.println("\n========== DISPLAYING DATA ==========");
                list.showData();
            } else if (pilihan == 4) {
                System.out.println("\nThank you for using the program. Goodbye!");
            } else {
                System.out.println("Invalid menu choice. Please enter a number between 1-4.");
            }

        } while (pilihan != 4);
        input.close();
    }
}
