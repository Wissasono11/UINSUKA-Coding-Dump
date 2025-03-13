public class LL_Insertion {
    LinkedList list;

    public LL_Insertion(LinkedList list) {
        this.list = list;
    }

    // insertion at the beginning
    public void insertAtBeginning(String nim, String nama) {
        Gerbong nodeAnyar = new Gerbong(nim, nama);
        nodeAnyar.next = list.loko;
        list.loko = nodeAnyar;
    }

    // insertion at the end
    public void insertAtEnd(String nim, String nama) {
        Gerbong nodeAnyar = new Gerbong(nim, nama);
        if (list.loko == null) {
            list.loko = nodeAnyar;
            return;
        }
        Gerbong tumbal = list.loko;
        while (tumbal.next != null) {
            tumbal = tumbal.next;
        }
        tumbal.next = nodeAnyar;
    }

    // insertion at the spesific data
    public void insertAtSpecific(String nim, String nama, String targetnim) {
        Gerbong tumbal = list.loko;
        while (tumbal != null && !tumbal.nim.equals(targetnim)) {
            tumbal = tumbal.next;
        }
        if (tumbal != null) {
            Gerbong nodeAnyar = new Gerbong(nim, nama);
            nodeAnyar.next = tumbal.next;
            tumbal.next = nodeAnyar;
        } else {
            System.out.println("Target NIM not found. Insertion failed.");
        }
    }
}
