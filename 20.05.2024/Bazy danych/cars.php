<?php
 require_once("connect.php")
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>projekt webowy inf.03</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="menu">
        <h3>Menu</h3>
        <ul>
            <li><a href="calc.php">Kalkulator spalania</a></li>   
            <li><a href="cars.php">Informacje dt. samochodu</a></li>
            <li><a href="contact.php">Kontakt</a></li> 
        </ul>
    </div>
    <div class="window">
        <div class="header"><?php include_once("header.php") ?></div>
        <div class="content">
            <div class="formCars">
                <form action="" method="post"> 
                <select name="" id ="">
                        <?php 
                        $zapytanie = "SELECT ids, nazwa_samochodu, opis_samochodu FROM samochody;";
                        foreach ($conn->query($zapytanie) as $wiersz) 
                        {
                        echo
                        (" <option value=".$wiersz["ids"]. ">" .$wiersz["nazwa_samochodu"]. "</option> ");
                        }
                        ?>
                </form>
                <div class="opis">
                    <?php 
                    function opis() {
                     echo("
                     <h2>" .$wiersz["nazwa_samochodu"].  "</h2> \n
                     <p>" .$wiersz["opis_samochodu"].  "</p>
                     ");
                    }
                    ?>
                </div>
            </div>
    </div>
        <div class="footer"><?php include_once("footer.php") ?></div>
    </div>

<script src="skrypt.js"></script>
</body>
</html>