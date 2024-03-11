<?php 
$server = "localhost";
$username = "root";
$password = "";
$bazadanych =  "radosc";
$port = 3306;
 try {
    $polaczenie = new PDO('mysql:host='.$server.'; dbname='.$bazadanych.'; port='.$port.'; charset=utf8', $username, $password);
    echo("<h1 class='polaczenie'>Połączono z bazą danych</h1>");
 } catch (PDOException $event) {
    echo("<h1 class='no'>ERROR połączonia z bazą danych</h1>");
    echo($event);
    die();
 }
?>