<?php $polaczenie = new mysqli('localhost', 'root', '','motory', 3306); ?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Motocykle</title>
    <style>
    <?php include("styl.css") ?>
    </style>
</head>
<body>
    <img src='motor.png' alt="motocykl"/>
    <header class="baner">
        <h1>Motocykle - moja pasja</h1>
    </header>
    <section class="lewy">
        <h2>Gdzie pojechać?</h2>
        <dl>
            <?php 
                $zapytanie2 = $polaczenie->query("SELECT nazwa, opis, poczatek, zrodlo FROM wycieczki INNER JOIN zdjecia ON zdjecia_id = zdjecia.id;");
                while(list($nazwa,$opis,$poczatek,$zrodlo)=mysqli_fetch_row($zapytanie2)){
                    echo("<dt>".$nazwa.", rozpoczyna się w ".$poczatek.", <a href=".$zrodlo.".jpg>zobacz zdjecie </a></dt>");
                    echo("<dd>".$opis."<dd>");
                }
            ?>
        </dl>
    </section>
    <section class="prawy_1">
        <h2>Co kupic?</h2>
        <ol>
            <li>Honda CB125R</li>
            <li>Yamaha YB125</li>
            <li>Honda VFR800i</li>
            <li>Honda CBR1100x</li>
            <li>BMW R1200GS LC</li>
        </ol>
    </section>
    <section class="prawy_2">
        <h2>Statystyki:</h2>
        <p>Wpisanych wycieczek:
            <?php 
                $zapytanie3 = $polaczenie->query("SELECT COUNT(id) FROM wycieczki;");
                foreach(mysqli_fetch_row($zapytanie3) as $ile){
                    echo($ile);
                }
                
            ?>
        </p>
        <p>Użytkowników forum: 200</p>
        <p>Przesłanych zdjęć: 1300</p>
        
    </section>
    <footer class="stopka">Stronę wykonał: 000000000000000</footer>

    
</body>
</html>
<?php $polaczenie->close(); ?>