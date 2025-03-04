<?php include_once("polaczenie.php")?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Średnia z przedmiotów</title>
</head>
<body>
    <form action="index.php" method="POST">
        <select name="lista">
            <option selected="selected">Wybierz przedmiot</option>
            <?php
                $pierwszy = 0;
                $zapytanie = $polaczenie->query("SELECT DISTINCT przedmiot FROM oceny");
                    while(list($przedmiot)=mysqli_fetch_row($zapytanie)){
                        echo(<<<TX
                         <option value = '$przedmiot'>$przedmiot</option>
                         TX);
                    }
            ?>
        </select>
        <input type="submit" value="ok">
    </form>
    <div>
        <?php
           if(isset($_POST['lista'])){
                $przedmiot = $_POST['lista'];
                if($przedmiot != "Wybierz przedmiot"){
                    $result = $polaczenie->query("SELECT AVG(oceny.ocena) FROM oceny WHERE przedmiot = '$przedmiot'");
                    list($srednia)=mysqli_fetch_row($result);
                    echo "Średnia z przedmiotu: $przedmiot ";
                    echo(round($srednia, 2));
                }
            }
            else{
                if($pierwszy == 0){
                    $pierwszy += 1;
                }
                else {
                    echo ("Brak przedmiotu");
                }
            }
        ?>
    </div>
</body>
</html>
<?php $polaczenie->close();?>