<?php 
$pol = new mysqli("localhost", "root", "", "baza10092024",3306);

if(mysqli_connect_errno()!=0){
    echo("<p> błąd ".mysqli_connect_errno()."</p>");
}else {
    echo("<h5> Polaczenie udane </h5>");
}
?>