<?php
    class Akun{
        private $username;
        
        public function __construct($username){
            $this->username = $username;
        }
        
        public function __destruct(){
            echo "Akun {$this->username} telah logout.\n";
        }
        
        public function tampilkanUsername(){
            echo "Akun: {$this->username}\n";
        }
    }
