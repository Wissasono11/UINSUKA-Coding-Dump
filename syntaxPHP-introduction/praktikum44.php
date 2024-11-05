<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tanggalan</title>
</head>
<body>

    Pilih Tanggal:
    <select name="tgl">
        <?php
            for($i = 1; $i < 31; $i++){
                echo "<option value = $i > $i </option>";
            }
        ?>
    
    <!-- gunakan foreach untuk memilih array bulan -->
    </select>
    Pilih Bulan:
    <select name="bln">
        <?php
            $bulan = array(
                1 => "Januari",
                2 => "Februari",
                3 => "Maret",
                4 => "April", 
                5 => "Mei",
                6 => "Juni", 
                7 => "Juli",
                8 => "Agustus",
                9 => "September",
                10 => "Oktober",
                11 => "November",
                12 => "Desember",
            );
            foreach($bulan as $key => $moon){
                echo "<option value = '$key' > Bulan - $key : $moon </option>";
            }
        ?>
    </select>

    Pilih Tahun:
    <select name="thn">
        <?php
            for($i = 1980; $i < 2025; $i++){
                echo "<option value = $i > $i </option>";
            }
        ?>
    </select>
</body>
</html>