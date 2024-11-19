<?php
    class Buku{
        public $judul, $penulis;
        
        public function setInfo($judul, $penulis){
            $this->judul = $judul;
            $this->penulis = $penulis;
        }
        
        public function tampilkanInfo(){
            return "Buku: $this->judul oleh $this->penulis";
        }
    }
$buku = new Buku();
$buku->setInfo('Belajar PHP', 'Andi');
echo $buku->tampilkanInfo();
