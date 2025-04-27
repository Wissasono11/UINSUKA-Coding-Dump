public class Queue {
    private Node depan;
    private Node belakang;

    public Queue() {
        this.depan = null;
        this.belakang = null;
    }

    public boolean isEmpty() {
        return depan == null;
    }

    // menambahkan elemen ke dalam antrian dari belakang
    public void enqueue(String data) {
        Node newNode = new Node(data);
        if (belakang == null) {
            depan = newNode;
            belakang = newNode;
        } else {
            belakang.next = newNode;
            belakang = newNode;
        }
    }

    public String dequeue() {
        if (isEmpty()) {
            return null; // Antrian kosong
        }
        String data = depan.data;
        depan = depan.next;
        if (depan == null) {
            belakang = null; // Jika antrian menjadi kosong
        }
        return data;
    }

    public void printQueue() {
        if (isEmpty()) {
            System.out.println("Antrian kosong");

        } else {
            Node current = depan;
            while (current != null) {
                System.out.print(current.data);
                if (current.next != null) {
                    System.out.print(" -> ");
                }
                current = current.next;
            }
            System.out.println();
        }
    }
}
