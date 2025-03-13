public class Gerbong {
    String nim;
    String nama;
    Gerbong next; 

    public Gerbong(String nim, String nama) { // konstruktor untuk menginisialisasi data
        this.nim = nim;
        this.nama = nama;
        this.next = null; // mula-mula next bernilai null
    }
}
