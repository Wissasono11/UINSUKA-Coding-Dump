<?php
    if(!isset($_POST["submit"])){
        header("Location: index7.php");
    }

    // ambil nilai form
    $nama = trim($_POST["nama"]);
    $email = trim($_POST["email"]);

    // cek apakah "nama" sudah diisi atau belum 
    if(empty($nama)){
        header("Location: index7.php?pesan=Nama belum diisi");
        die();
    }
    // cek apakah "email" sudah diisi atau belum
    if(empty($email)){
        header("Location: index7.php?pesan=Email belum diisi");
        die();
    }
?>
    <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Belajar Get Dan Post PHP - 7</title>
</head>
<body>
    <h1>Halaman Proses</h1>
    <?php
        echo "Nama: ".$_POST["nama"]."<br>";
        echo "Email: ".$_POST["email"]."<br>";
        if (isset($_POST["belajar"])){
            echo "Belajar: ".$_POST["belajar"]."<br>";
        }
    ?>
</body>
</html>