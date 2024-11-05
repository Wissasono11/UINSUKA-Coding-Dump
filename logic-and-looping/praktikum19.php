<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    Pilih Tanggal:
    <select name="tgl">
        <?php
        for ($i = 1; $i <= 31; $i++) {
            echo "<option value = $i > $i </option>";
        }
        ?>
    </select> 

    Pilih Bulan:
    <select name="bln">
        <?php
        for ($i = 1; $i <= 12; $i++) {
            echo "<option value = Bulan-$i > Bulan-$i </option>";
        }
        ?>
    </select> 

    Pilih Tahun:
    <select name="thn">
        <?php
        for ($i = 1980; $i <= 2025; $i++) {
            echo "<option value = $i > $i </option>";
        }
        ?>
    </select> 
</body>
</html>