import java.util.Scanner;

public class Array2 {
    public static void main(String[] args){
        String[][] students = new String[10][2]; //rectangular array
        Scanner scanner = new Scanner(System.in);

        // input data from users
        for(int i = 0; i < 5; i++){
            System.out.print("Input NIM for student #-" + (i+1) + ": ");
            students[i][0] = scanner.nextLine();
            System.out.print("Input Name for student #-" + (i+1) + ": ");
            students[i][1] = scanner.nextLine();
            System.out.println();
        }

        System.out.println("===Data has been inputted successfully!===");
        System.out.println();

        // display data to users
        for(int i = 0; i < 5; i++){
            System.out.println("Student's NIM #" + (i+1) + " is " + students[i][0]);
            System.out.println("Student's Name #" + (i+1) + " is " + students[i][1]);
            System.out.println();
        }

        scanner.close();
    }
}
