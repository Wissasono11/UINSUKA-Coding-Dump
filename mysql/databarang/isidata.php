<?php
    include_once("config.php");

    if(isset($_POST['submit'])) {
        $kdbrng = $_POST['kdbrng'];
        $namabrg = $_POST['namabrg'];
        $harga = $_POST['harga'];
        $stok = $_POST['stok'];

        $result = mysqli_query($mysqli, "INSERT INTO barang(kdbrng, namabrg, harga, stok) VALUES('$kdbrng', '$namabrg', '$harga', '$stok')");

        if($result) {
            header("Location: tampil.php");
        } else {
            echo "Error: " . mysqli_error($mysqli);
        }
    }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tambah Barang</title>
    <link rel="stylesheet" href="style/style-isidata.css">
</head>
<body>
    <div class="container">
        <h1>Tambah Barang</h1>
        <form action="isidata.php" method="post">
            <table border="0">
                <tr>
                    <td>Kode Barang</td>
                    <td><input type="text" name="kdbrng" required></td>
                </tr>
                <tr>
                    <td>Nama Barang</td>
                    <td><input type="text" name="namabrg" required></td>
                </tr>
                <tr>
                    <td>Harga</td>
                    <td><input type="text" name="harga" required></td>
                </tr>
                <tr>
                    <td>Stok</td>
                    <td><input type="text" name="stok" required></td>
                </tr>
                <tr>
                    <td></td>
                    <td><input type="submit" name="submit" value="Tambah"></td>
                </tr>
            </table>
        </form>
        <a href="tampil.php" class="view-data-link">Lihat Data Barang</a>
    </div>
</body>
</html>