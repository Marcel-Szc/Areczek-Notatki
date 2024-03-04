<?php 

if(isset($_POST["nazwa"]) && isset($_POST["czas_realizacji"]) ) {
$nazwa = $_POST["nazwa"];
$czas_realizacji= $_POST["czas_realizacji"];

echo "$nazwa, $czas_realizacji";
include_once("polaczenie.php");
$dodaj_do_bazy = "INSERT INTO gupoty(nazwa,czas_realizacji) values('$nazwa','$czas_realizacji')";

if($polaczenie->exec($dodaj_do_bazy)){
    echo "<h4>Dodano do BD</h4>";
}else{
    echo "<h4>ERROR</h4>";
}

$polaczenie=null;

header("refresh:2;url=index.php");
}
else {
    header("location:index.php");
}

?>