<?php
include_once("polaczenie.php");
?>

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CRUD</title>
</head>
<body>
    <div>
        <h1 style="text-align: center;">
            PHP - MYSQL - CRUD
        </h1>
    </div>
    <hr style="margin-top: 50px; margin-bottom: 20px;">
    <div class="czytaj" style="text-align: center;">
    <?php
    $zapytanieSelect = $polaczenie->query("SELECT idz, nazwa, cena FROM zakupy;");
    echo("<ul>");
    while(list($idz, $nazwa, $cena)=mysqli_fetch_row($zapytanieSelect)){
        echo("<li>");
        echo("$nazwa: cena $cena zł <a href='usun.php?idz=$idz'> USUN </a>");
        echo("</li>");
    }
    echo("</ul>");
    ?>
    </div>
</body>
</html>
<?php
$polaczenie->close();
?> 