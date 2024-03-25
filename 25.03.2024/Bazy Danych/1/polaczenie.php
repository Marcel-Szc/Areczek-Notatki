<?php 
$dbname = "baza25032024";
$user = "root";
$password = "";
$server = "localhost";
$port = 3306;
try {
    $polaczenie = new PDO('mysql:host='.$server.'; dbname='.$dbname. '; port='.$port.'; charset=utf8', $user, $password);
    echo("<h1 class='Si'>Połączono</h1>");
}catch (PDOException $event) {
    echo(" <h1 class='nein'>ERROR</h1> ");
    die();
}

?>