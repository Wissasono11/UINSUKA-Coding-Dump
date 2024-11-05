<?php
    $user = "guest";

    if($user == "admin"){
        echo "Selamat datang admin!";
    }
    else if($user == "user"){
        echo "Selamat datang user";
    }
    else if($user == "guest"){
        echo "Selamat datang guest";
    }
    else{
        echo "Siapa kamu?!";
    }