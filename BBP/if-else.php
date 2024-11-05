<?php
    $users = "Bayu";

    if($users == "Bayu"){
        echo "Selamat datang $users!";
    }
    else if($users == "admin"){
        echo "Selamat datang Admin!";
    }
    else if($users == "guest"){
        echo "Selamat datang Guest!";
    }
    else{
        echo "Maaf anda tidak dapat masuk!!!";
    }
?>