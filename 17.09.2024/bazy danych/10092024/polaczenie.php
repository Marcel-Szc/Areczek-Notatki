<?php
    $user = "root";
    $password = "";
    $server = "localhost";
    $db = "baza10092024";
    $port = 3306;

    $polaczenie = @new mysqli($server, $user, $password, $db, $port);

    if(mysqli_connect_errno()!=0){
        echo("<p> Bład połączenia".mysqli_connect_error(). "</p>");
    }else{
        echo("<h5> Połączono z bazą dnaych </h5>");
    }

?>