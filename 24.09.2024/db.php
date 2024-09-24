<?php 
$conn = new mysqli("localhost","root","","my_database");

if ($conn->connect_error){
    die("Polaczenie nieudane: " .$conn->connect_error);
}
?>