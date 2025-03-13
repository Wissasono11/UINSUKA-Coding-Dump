public class LinkedList {
    LL_Insertion insertion;
    LL_Deletion deletion;
    Gerbong loko;

    public LinkedList() {
        this.loko = null;
        this.insertion = new LL_Insertion(this);
        this.deletion = new LL_Deletion(this);
    }

    // Show data
    public void showData() {
        Gerbong current = loko;
        if (current == null) {
            System.out.println("No data available.");
            return;
        }
        while (current != null) {
            System.out.println("Mahasiswa dengan NIM " + current.nim + " dengan nama " + current.nama);
            current = current.next;
        }
    }
}
