<?php
    include_once("config.php");

    if(isset($_POST['update'])) {
        $kdbrng = $_POST['kdbrng'];
        $namabrg = $_POST['namabrg'];
        $harga = $_POST['harga'];
        $stok = $_POST['stok'];

        $result = mysqli_query($mysqli, "UPDATE barang SET namabrg='$namabrg', harga='$harga', stok='$stok' WHERE kdbrng='$kdbrng'");

        if($result){
            header("Location:tampil.php");
        } else {
            echo "Error: " . mysqli_error($mysqli);
        }
    }
    if(isset($_GET['kdbrng'])){
        $kdbrng = $_GET['kdbrng']; 

        $result = mysqli_query($mysqli, "SELECT * FROM barang WHERE kdbrng='$kdbrng'");

        if($result){
            $user_data = mysqli_fetch_array($result);
            $kdbrng = $user_data['kdbrng'];
            $namabrg = $user_data['namabrg'];
            $harga = $user_data['harga'];
            $stok = $user_data['stok'];
        } else{
            echo "Error: " . mysqli_error($mysqli);
            exit;
        }
    } else{
        echo "Error: kdbrng parameter is missing";
        exit;
    }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Edit Data</title>
    <link rel="stylesheet" href="style/style-edit.css">
</head>
<body>
    <div class="container">
        <a href="tampil.php" class="back-link">Back To Daftar Barang</a>
        <br><br>
        <form action="edit.php" method="post">
            <table border="0">
                <tr>
                    <td>Kode Barang</td>
                    <td><input type="text" name="kdbrng" value="<?php echo $kdbrng;?>" readonly></td>
                </tr>
                <tr>
                    <td>Nama Barang</td>
                    <td><input type="text" name="namabrg" value="<?php echo $namabrg;?>" required></td>
                </tr>
                <tr>
                    <td>Harga Barang</td>
                    <td><input type="text" name="harga" value="<?php echo $harga;?>" required></td>
                </tr>
                <tr>
                    <td>Stok</td>
                    <td><input type="text" name="stok" value="<?php echo $stok;?>" required></td>
                </tr>
                <tr>
                    <td><input type="hidden" name="kdbrng" value="<?php echo $kdbrng;?>"></td>
                    <td><input type="submit" name="update" value="Update"></td>
                </tr>
            </table>
        </form>
    </div>
</body>
</html>