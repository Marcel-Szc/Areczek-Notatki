<?php include_once("polaczenie.php")?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Połączenie przez PDO</title>
</head>
<body>
    <div class="box">
        <?php 
           $zapytanie = "SELECT imie, nazwisko, adres FROM uczniowie";
           foreach($polaczenie->query($zapytanie) as $wiersz){
                echo "<h3>".$wiersz["imie"]." ".$wiersz["nazwisko"]." ".$wiersz["adres"]."<br></h3>";
           }
        ?>
    </div>
    <?php $polaczenie=null;//zamknięcie ?>
</body>
</html>