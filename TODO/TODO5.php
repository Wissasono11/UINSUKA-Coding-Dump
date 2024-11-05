<!-- 
 Buat program PHP yang membalikkan string yang dimasukkan oleh pengguna. 
 Ketentuan:
    1. Program harus meminta pengguna untuk memasukkan string.
    2. Program harus mengembalikan string yang dimasukkan oleh pengguna dalam keadaan terbalik.
 -->
img
<?php
    function balikKata($words){
      return strrev($words);
    }

    echo "Masukkan kata:";
    $words = trim(fgets(STDIN));

    // validasi inputan
    if(!preg_match('/^[a-zA-Z\s]+$/',$words)){
      echo "Inputan harus berupa huruf dan tidak kosong!".PHP_EOL;  
      exit();
   } else{
      $result = balikKata($words);
      echo "Kata yang dinputkan adalah: $words" .PHP_EOL;
      echo "Kata yang dibalikkan adalah: $result" .PHP_EOL; 
     }
?>
   
   