<!DOCTYPE html>
<html lang="pl">
<head>
    <link rel="stylesheet" href="style.css">
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Wszystkie góry</title>
</head>
<body>
    <div class="licznik">
   <?php
            $counter_records = $conn->query("SELECT gory2024.ID, gory2024.CENABILETU, gory2024.NAZWA FROM gory2024;");
            list($ile)=mysqli_fetch_row($counter_records);
            echo"<h4>$ile rekordów </h4>";
        ?>
    </div>
    <nav>
        <ul>
            <li><a href="kat1.php"></a>Góry z kategorii nr 1</li>
            <li><a href="kat4.php">Góry z Kategorii nr 4</a></li>
            <li><a href="wszystkie.php">Wszystkie góry</a></li>
        </ul>
    </nav>
    <div class="wszysktie">
        <ul>
            <?php
                $wszystkieRekordy = $connection->query("SELECT gory2024.ID, gory2024.CENABILETU, gory2024.NAZWA, SUM(gory2024.CENABILETU) FROM gory2024;");
                while(list($ID, $CENABILETU, $NAZWA, $KATEGORIA)=mysqli_fetch_row($wszystkieRekordy)){
                    echo("<li><b>$ID, </b><i>$Imie, $Nazwisko, $Wiek</i></li>");
                }
            ?>
            </ul>
        </div>
</body>
</html>
<?php $connection->close();?>