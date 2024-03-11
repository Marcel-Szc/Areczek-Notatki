<?php include_once("polaczenie.php")?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Lista</title>
</head>
<body>
<nav> 
    <a href="index.php"><div class="home">HOME</div></a>
    <a href="lista.php"><div class="lista">LISTA</div></a>
<div class="box">
        <form action="jeden.php" method="post">
        <select name="efekt" id="efect" onchange="this.form.submit();" >
        <option value="wybór">Wybier....</option>
        <?php 
           $zapytanie = "SELECT IDE, Nazwa, IDD FROM efekt";
           foreach($polaczenie->query($zapytanie) as $wiersz){  
            echo ("<option value=".$wiersz["Nazwa"].">".$wiersz["Nazwa"]."</option>");
           }
        ?>
        </select>
        </form>
    </div>
    <?php $polaczenie=null; ?>
</div>
</body>
</html>