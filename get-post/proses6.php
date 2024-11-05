<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Belajar Get Dan Post PHP - 6</title>
</head>
<body>
    <h1>Halaman Proses</h1>
    <?php
        $nama = $_POST["nama"];
        $email = $_POST["email"];

        if(empty($nama)){
            echo "Nama belum diisi <br>";
        }
        else{
            echo "Nama: $nama <br>";
        }
        if(empty($email)){
            echo "Email wajib diisi <br>";
        }
        else{
            echo "Email: $email <br>";
        }
        if(isset($_POST["belajar"])){
            echo "Belajar: ".$_POST["belajar"]."<br>";
        }
    ?>
</body>
</html>