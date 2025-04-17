public class insertion {

    // logika untuk memasukkan data dari depan
    public static void insertAtBeginning(doublyLL doublell, String nim, String nama) {
        doublyLL.Node newNode = doublell.new Node(nim, nama);
        if (doublell.head == null) {
            doublell.head = doublell.tail = newNode;
        } else {
            newNode.next = doublell.head;
            doublell.head.prev = newNode;
            doublell.head = newNode;
        }
    }

    // logika untuk memasukkan data dari posisi yang spesifik
    public static void insertAtPosition(doublyLL doublell, String nim, String nama, int position) {
        doublyLL.Node newNode = doublell.new Node(nim, nama);
        if (position == 1) {
            insertAtBeginning(doublell, nim, nama);
            return;
        }

        doublyLL.Node temp = doublell.head;
        for (int i = 1; i < position - 1 && temp != null; i++) {
            temp = temp.next;
        }

        if (temp == null) {
            System.out.println("Position out of bounds. Insertion failed.");
            return;
        }

        newNode.next = temp.next;
        newNode.prev = temp;
        if (temp.next != null) {
            temp.next.prev = newNode;
        } else {
            doublell.tail = newNode; // Update tail if inserting at the end
        }
        temp.next = newNode;
    }

    // logika untuk memasukkan data dari belakang
    public static void insertAtEnd(doublyLL doublell, String nim, String nama) {
        doublyLL.Node newNode = doublell.new Node(nim, nama);
        if (doublell.tail == null) {
            doublell.head = doublell.tail = newNode;
        } else {
            doublell.tail.next = newNode;
            newNode.prev = doublell.tail;
            doublell.tail = newNode;
        }
    }
}
