<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Date</title>
</head>
<body>
    
    <!-- Section Date -->
    Choose Date:
    <select name="tgl">
        <?php
        for ($i = 1; $i <= 31; $i++){
            echo "<option value = $i > $i </option>";
            }
        ?>
    </select>

    <!-- Section Moon -->
    Choose Moon:
    <select name="bln">
        <?php
        for ($i = 1; $i <= 12; $i++){
            echo "<option value = Bulan - $i > Bulan - $i </option>";
         }
        ?>
    </select> 
    <!-- Section Years -->
    Choose Year:
    <select name="thn">
    <?php
    for ($i = 1980; $i <= 2024; $i++){
        echo "<option value =  $i > $i </option>";
        }
    ?>    
    </select>
</body>
</html>