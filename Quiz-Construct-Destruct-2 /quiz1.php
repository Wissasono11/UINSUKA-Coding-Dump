<?php
    class Hewan{
        private $kucing;
        
        public function __construct($kucing){
            $this->kucing = $kucing;
        }
        
        public function getKucing(){
            return $this->kucing;
        }
    }
