<?php
    include_once("config.php");

    if(isset($_GET['kdbrng'])) {
        $kdbrng = $_GET['kdbrng'];
       
        $result = mysqli_query($mysqli, "DELETE FROM barang WHERE kdbrng='$kdbrng'");
       
        if($result) {
            header("Location:tampil.php");
        } else {
            echo "Error: " . mysqli_error($mysqli);
        }
    } else{
        echo "Error: kdbrng parameter is missing";
    }
