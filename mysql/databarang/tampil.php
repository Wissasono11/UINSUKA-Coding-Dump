<?php
    include_once("config.php");

    // Periksa koneksi
    if (!$mysqli) {
        die("Connection failed: " . mysqli_connect_error());
    }

    // Ambil data dari tabel barang
    $result = mysqli_query($mysqli, "SELECT * FROM barang");

    // Periksa apakah query berhasil
    if (!$result) {
        die("Query failed: " . mysqli_error($mysqli));
    }
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Daftar Barang</title>
    <link rel="stylesheet" href="style/style-tampil.css">
</head>
<body>
    <div class="container">
        <h1>Daftar Barang</h1>
        <?php
            // Periksa apakah ada data yang diambil
            if (mysqli_num_rows($result) > 0) {
                // Loop melalui data dan tampilkan
                while($user_data = mysqli_fetch_array($result)){
                    echo "<div class='item'>";
                    echo "<p><strong>Kode Barang:</strong> ".$user_data['kdbrng']."</p>";
                    echo "<p><strong>Nama Barang:</strong> ".$user_data['namabrg']."</p>";
                    echo "<p><strong>Harga Barang:</strong> ".$user_data['harga']."</p>";
                    echo "<p><strong>Stok:</strong> ".$user_data['stok']."</p>";
                    echo "<a href='edit.php?kdbrng=". $user_data['kdbrng'] ."' class='btn'>Edit</a> | ";
                    echo "<a href='delete.php?kdbrng=". $user_data['kdbrng'] ."' class='btn'>Hapus</a>";
                    echo "</div><br/>";
                }
            } else {
                echo "<p>Tidak ada data barang yang ditemukan.</p>";
            }
        ?>
        <a href="index.php" class="btn">Kembali ke Menu Barang</a>
    </div>
</body>
</html>