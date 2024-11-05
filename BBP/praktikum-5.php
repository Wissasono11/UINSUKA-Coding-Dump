<?php
$angka_nol         = 0;
$angka_int         = 12;
$angka_float       = 99.75;
$angka_float_kecil = 0.000001;
$array_kosong      = array();
$array_isi         = array("a", "b", "c");
$null              = null;
$object            = new stdClass;
$resource          = fopen("array.php", "r");

$angka_nol = (bool) $angka_nol;
var_dump($angka_nol);  // bool(false)
echo "<br>";

$angka_int = (bool) $angka_int;
var_dump($angka_int);  // bool(true)
echo "<br>";

$angka_float = (bool) $angka_float;
var_dump($angka_float);  // bool(true)
echo "<br>";

$angka_float_kecil = (bool) $angka_float_kecil;
var_dump($angka_float_kecil);  // bool(true)
echo "<br>";

$array_kosong = (bool) $array_kosong;
var_dump($array_kosong);  // bool(false)
echo "<br>";

$array_isi = (bool) $array_isi;
var_dump($array_isi);  // bool(true)
echo "<br>";

$null = (bool) $null;
var_dump($null);  // bool(false)
echo "<br>";

$object = (bool) $object;
var_dump($object);  // bool(true)
echo "<br>";

$resource = (bool) $resource;
var_dump($resource);  // bool(true)
echo "<br>";
?>
