import java.util.Scanner;
public class SP {
    public static void main(String[] args) {
        /*  
        Celeng #1 Arei non-rectangular
        Membuat program untuk:
        0. minta inputan dari user untuk ukuran / baris SP
        1. mendeklarasikan SP array non rectangular untuk menyimpan segitiga pascal
        2. mengisi array tersebut dengan data segitiga pascal
        3. menampilkan data segitiga pascal ke layar
        */

        // get input from user
        Scanner scanner = new Scanner(System.in);
        System.out.println("Input the size of Pascal Triangle: ");
        int n = scanner.nextInt();

        // declare SP array non-rectangular
        int[][] SP = new int[n][];

        // fill the SP array with pascal triangle data
        for(int i = 0; i < n; i++){
            SP[i] = new int[i+1]; // menyesuaikan ukuran setiap baris
            SP[i][0] = 1; // elemen pertama setiap baris adalah 1
            SP[i][i] = 1; // elemen terakhir setiap baris adalah 1
            
            // calculates the value of the centered array element based on the start and end elements
            for(int j = 1; j < i; j++){
                SP[i][j] = SP[i - 1][j - 1] + SP[i - 1][j];
            }
        }

        // display the SP array to the screen
        System.out.println();
        System.out.println("Pascal Triangle with size " + n + " is:");
        for(int i = 0; i < n; i++){
            // memberikan jarak antar elemen
            // for(int x = 0; x < n - i; x++){
            //     System.out.print(" ");
            // }

            for(int j = 0; j < SP[i].length; j++){
                System.out.print(SP[i][j] + " ");
            }
            System.out.println();
        }
        scanner.close();
    }
}
