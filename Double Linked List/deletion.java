public class deletion {

    // logika untuk menghapus data dari depan
    public static void deleteAtBeginning(doublyLL doublell) {
        if (doublell.head == null) {
            System.out.println("List is empty. Deletion failed.");
            return;
        }
        if (doublell.head == doublell.tail) {
            doublell.head = doublell.tail = null;
        } else {
            doublell.head = doublell.head.next;
            doublell.head.prev = null;
        }
    }

    // logika untuk menghapus data dari posisi yang spesifik
    public static void deleteAtPosition(doublyLL doublell, int position) {
        if (doublell.head == null) {
            System.out.println("List is empty. Deletion failed.");
            return;
        }
        if (position == 1) {
            deleteAtBeginning(doublell);
            return;
        }
        doublyLL.Node temp = doublell.head;
        for (int i = 1; i < position - 1 && temp != null; i++) {
            temp = temp.next;
        }
        if (temp == null) {
            System.out.println("Position out of bounds. Deletion failed.");
            return;
        }
        if (temp.next != null) {
            temp.next.prev = temp.prev;
        } else {
            doublell.tail = temp.prev;
        }
        if (temp.prev != null) {
            temp.prev.next = temp.next;
        }
    }

    // logika untuk menghapus data dari belakang
    public static void deleteAtEnd(doublyLL doublell) {
        if (doublell.tail == null) {
            System.out.println("List is empty. Deletion failed.");
            return;
        }
        if (doublell.head == doublell.tail) {
            doublell.head = doublell.tail = null;
        } else {
            doublell.tail = doublell.tail.prev;
            doublell.tail.next = null;
        }
    }
}
