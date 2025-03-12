public class Single2 {
    public static void main(String[] args) {
        Gerbong loko = null;

        Gerbong gerbong_baru = new Gerbong(5);
        loko = gerbong_baru; 

        gerbong_baru = new Gerbong(9);
        if (loko.next == null) {
            loko.next = gerbong_baru;
        }

        gerbong_baru = new Gerbong(7);
        if (loko.next.next == null) {
            loko.next.next = gerbong_baru;
        }

        gerbong_baru = new Gerbong(13);
        if (loko.next.next.next == null) {
            loko.next.next.next = gerbong_baru;
        }

        gerbong_baru = new Gerbong(11);
        if (loko.next.next.next.next == null) {
            loko.next.next.next.next = gerbong_baru;
        }

        Gerbong help = loko;
        while (help != null) {
            System.out.println("Data = " + help.data);
            help = help.next;
        }
    }
}
