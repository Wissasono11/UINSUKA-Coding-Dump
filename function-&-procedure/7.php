<?php
    function salam($waktu, $nama){
        echo "Selamat $waktu, $nama";
    }
    salam("Pagi", null);
    salam("", "Joko");
    salam("Pagi", "Indonesia...");