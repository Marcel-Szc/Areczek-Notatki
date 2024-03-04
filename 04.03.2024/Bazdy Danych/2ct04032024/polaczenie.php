<?php 
$server = "localhost";
$username = "root";
$password = "";
$bazadanych =  "2ct04032024";
$port = 3306;
 try {
    $polaczenie = new PDO('mysql:host='.$server.'; dbname='.$bazadanych.'; port='.$port.'; charset=utf8', $username, $password);
    echo("<h1 class='polaczenie'>Połączono z bazą przez PDO</h1>");
 } catch (PDOException $event) {
    echo("<h1 class='no'>ERROR połączonia z bazą przez PDO</h1>");
    echo($event);
    die();// Jeżeli nie połączę się z bazą to rozłącz połączenie
 }
?>