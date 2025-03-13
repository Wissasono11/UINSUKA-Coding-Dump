public class LL_Deletion {
    LinkedList list;

    public LL_Deletion(LinkedList list) {
        this.list = list;
    }

    // Deletion at the beginning
    public void deleteAtBeginning() {
        if (list.loko != null) {
            list.loko = list.loko.next;
        }
    }

    // Deletion at the end
    public void deleteAtEnd() {
        if (list.loko == null)
            return;
        if (list.loko.next == null) {
            list.loko = null;
            return;
        }
        Gerbong temp = list.loko;
        while (temp.next.next != null) {
            temp = temp.next;
        }
        temp.next = null;
    }

    // Deletion at specific data
    public void deleteNode(String nim) {
        if (list.loko == null)
            return;
        if (list.loko.nim.equals(nim)) {
            list.loko = list.loko.next;
            return;
        }
        Gerbong temp = list.loko;
        while (temp.next != null && !temp.next.nim.equals(nim)) {
            temp = temp.next;
        }
        if (temp.next != null) {
            temp.next = temp.next.next;
        }
    }
}
