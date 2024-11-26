<?php
    class Buku{
        private $judul;
        private $penulis;
        private $tahun;
        
        public function __construct($judul, $penulis, $tahun){
            $this->judul = $judul;
            $this->penulis = $penulis;
            $this->tahun = $tahun;
        }
        
        public function tampilkanDetail(){
            echo "Judul: {$this->judul}, Penulis: {$this->penulis}, Tahun: {$this->tahun}\n";
        }
        
        public function __destruct(){
            echo "Buku {$this->judul} telah dihapus.\n";
        }
    }
