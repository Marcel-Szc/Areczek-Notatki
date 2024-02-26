<?php 
$server = "localhost";
$username = "root";
$password = "";
$bazadanych =  "2ct26.02.2024";
$port = 3306;
 try {
    $polaczenie = new PDO('mysql:host='.$server.'; dbname='.$bazadanych.'; port='.$port.'; charset=utf8', $username, $password);
    echo("<h1>Połączono z bazą przez PDO</h1>");
 } catch (PDOException $event) {
    echo("<h1>ERROR połączonia z bazą przez PDO</h1>");
    echo($event);
    die();// Jeżeli nie połączę się z bazą to rozłącz połączenie
 }
?>