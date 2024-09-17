<?php
include_once("polaczenie.php");
$idz = isset($_GET['idz'])?$_GET['idz']:header("Location:index.php");

$usun = $polaczenie->query("delete from zakupy where idz=$idz");

if($usun) {
    echo("IDZ: {$_GET['idz']}");
}

$polaczenie->close();
?>