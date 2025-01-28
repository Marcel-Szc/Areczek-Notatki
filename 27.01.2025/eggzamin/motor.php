<?php $polaczenie = new mysqli('localhost', 'root', '','motory', 3306); ?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Motocykle</title>
    <link rel="stylesheet" href="styl.css">
</head>
<body>
    <img src='motor.png' alt="motocykl"/>
    <header class="baner">
        <h1>Motocykle - moja asja</h1>
    </header>
    <section class="lewy">
        <h2>Gdzie pojechać?</h2>
        <dl>
            <?php 
                #...
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
        
    </section>
    <footer class="stopka">Stopka</footer>

    
</body>
</html>
<?php $polaczenie->close(); ?>