public class Single {
    public static void main(String[] args) {
        Gerbong loko = null;

        Gerbong gerbong_baru = new Gerbong(5);
        loko = gerbong_baru;

        gerbong_baru = new Gerbong(9);
        gerbong_baru.next = loko;
        loko = gerbong_baru;

        gerbong_baru = new Gerbong(7);
        gerbong_baru.next = loko;
        loko = gerbong_baru;

        System.out.println("Data sebelum penyisipan:");
        Gerbong help = loko;
        while (help != null) {
            System.out.println("Data = " + help.data);
            help = help.next;
        }

        gerbong_baru = new Gerbong(11);
        gerbong_baru.next = loko;
        loko = gerbong_baru;

        System.out.println("Data setelah penyisipan:");
        help = loko;
        while (help != null) {
            System.out.println("Data = " + help.data);
            help = help.next;
        }
        
        // // hapus data awal: 11
        // Gerbong hapus = loko;
        // loko = loko.next;
        // System.out.println("Setelah menghapus data:" + hapus.data);
        
        // // kembali mencetak data
        // help = loko;
        // while (help != null) {
        //     System.out.println("Data = " + help.data);
        //     help = help.next;
        // }

        // // hapus data kedua: 7
        // hapus = loko;
        // loko = loko.next;
        // System.out.println("Setelah menghapus data:" + hapus.data);
        
        // // kembali mencetak data
        // help = loko;
        // while (help != null) {
        //     System.out.println("Data = " + help.data);
        //     help = help.next;
        // }

        // // hapus data terakhir : 5
        // help = loko;
        // while (help.next.next != null) {
        //     help = help.next;
        // }
        // Gerbong hapus = help.next;
        // help.next = null;

        // System.out.println("Data setelah penghapusan terakhir:");
        // help = loko;
        // while (help != null) {
        //     System.out.println("Data = " + help.data);
        //     help = help.next;
        // }

        // hapus data yang ditengah: 9
        int data_hapus = 9;
        help = loko;
        while (help.next.data != data_hapus) {
            help = help.next;
        }
        Gerbong hapus = help.next;
        help.next = hapus.next;

        System.out.println("Data setelah penghapusan ditengah:");
        help = loko;
        while (help != null) {
            System.out.println("Data = " + help.data);
            help = help.next;
        }
    }
}
