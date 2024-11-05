<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Belajar Get Dan Post PHP - 4</title>
</head>
<body>
    <h1>Halaman Proses</h1>
    <?php
        if(isset($_POST["submit"])){
            echo "Nama: ".$_POST["nama"]."<br>";
            echo "Email: ".$_POST["email"]."<br>";
            if(isset($_POST["belajar"])){
                echo "Belajar: ".$_POST["belajar"]."<br>";
            }
        }
        else{
            echo "Halaman ini hanya bisa diakses dari form";
        }
    ?>
</body>
</html>