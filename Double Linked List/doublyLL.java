public class doublyLL {
    class Node {
        String nim, nama;
        Node next, prev;

        Node(String nim, String nama) {
            this.nim = nim;
            this.nama = nama;
            this.next = null;
            this.prev = null;
        }
    }

    Node head, tail;

    public doublyLL() {
        head = null;
        tail = null;
    }
}
