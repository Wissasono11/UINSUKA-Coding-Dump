<?php
    include_once("config.php");
    $result = mysqli_query($mysqli, "SELECT * FROM `barang`");
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form Untuk Mengisi Form Barang</title>
    <link rel="stylesheet" href="style/style-index.css">
</head>
<body>
    <div class="cointainer">
        <h1>Menu Barang</h1>
        <ul>
            <li><a href="isidata.php">Tambahkan Data</a></li>
            <li><a href="tampil.php">Tampilkan Data</a></li>
        </ul>
    </div>
</body>
</html>