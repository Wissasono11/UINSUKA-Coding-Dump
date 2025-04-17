public class showData {
    // Menampilkan data dari depan ke belakang
    public static void showFromFront(doublyLL doublell) {
        if (doublell.head == null) {
            System.out.println("List is empty.");
            return;
        }
        doublyLL.Node temp = doublell.head;
        while (temp != null) {
            System.out.println("Mahasiswa dengan NIM " + temp.nim + ", bernama " + temp.nama);
            temp = temp.next;
        }
    }

    // Menampilkan data dari belakang ke depan
    public static void showFromBack(doublyLL doublell) {
        if (doublell.tail == null) {
            System.out.println("List is empty.");
            return;
        }
        doublyLL.Node temp = doublell.tail;
        while (temp != null) {
            System.out.println("Mahasiswa dengan NIM " + temp.nim + ", bernama " + temp.nama);
            temp = temp.prev;
        }
    }
}
