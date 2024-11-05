<?php
class Mobil {
    public $merek;
    public $ccMesin;
    public $warna;

    // Constructor to initialize properties
    public function __construct($merek, $ccMesin, $warna) {
        $this->merek = $merek;
        $this->ccMesin = $ccMesin;
        $this->warna = $warna;
    }

    public function rem() {
        return "Mobil dengan merek {$this->merek} sedang melakukan pengereman.". "\n";
    }

    // Method untuk belok
    public function belok($arah) {
        return "Mobil dengan merek {$this->merek} sedang berbelok ke arah $arah.". "\n";
    }
}

// Contoh penggunaan class Mobil
$mobil1 = new Mobil("Toyota", "1500cc", "Merah");

echo $mobil1->ccMesin ."\n";
echo $mobil1->warna;