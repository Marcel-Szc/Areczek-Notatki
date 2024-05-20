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
        <br>
        <div class="wynik">
            <h4>Wynik Kalkulatora: </h4>
            <div id="wynikCalc"></div>
        </div>
    </div>
    <div class="window">
        <div class="header"><?php include_once("header.php") ?></div>
        <div class="content">
            <div class="calcForm">
                <form action="calc.php" method="post" id="calc">
                    <label for="paliwo">Spalanie na litr/100km: </label>
                    <input type="number" min=0 id="paliwo">
                    <br>
                    <label for="dystans">pokonany dystans w km: </label>
                    <input type="number" min=0 id="dystans">
                    <br>
                    <label for="cena">cena paliwa w zł: </label>
                    <input type="number" min=0 id="cena">
                </form>
                <button class="BTNoblicz" onclick="oblicz()"></button>
            </div>
    </div>
        <div class="footer"><?php include_once("footer.php") ?></div>
    </div>

<script src="skrypt.js"></script>
</body>
</html>