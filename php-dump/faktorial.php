<?php
     function hitungFaktorial($angka){
        $faktorial = 1;
        for($i = 1; $i <= $angka; $i++){
            $faktorial = $faktorial * $i;
        }
        return $faktorial;
     }
     $angka = 5;
     $result = hitungFaktorial($angka);

     echo "Faktorial dari $angka adalah $result";
    ?>  