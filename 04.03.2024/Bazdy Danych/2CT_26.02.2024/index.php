<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Połączenie przez PDO</title>
    <style type="text/css">
        .tabela_head {
            font-weight: bolder;
        }
        td {
            padding: 10px;
        }
        .formularz {
            width: 600px;
            margin: auto;
        }
        input[name='imie'],input[name='nazwisko'],input[name='adres'] {
            width: 400px;
            height: 25px;
            margin: 10px;
        }
        input[type="submit"] {
            float: right;
            background-color: orange;
            width: 80px;
        }
        .box{
            width:300px;
            margin: auto;
        }
        .polaczenie{
            
            text-align: center;
        }
    </style>
</head>
<body>
    <div class="formularz">
        <fieldset>
            <legend>Dodaj do bazy danych</legend>
            <form action="dodaj_do_bazy.php" method="post">
              <input type="text" name="imie" placeholder="Podaj imie..." required/><br/>
              <input type="text" name="nazwisko" placeholder="Podaj nazwisko..." required/><br/>
              <input type="text" name="adres" placeholder="Podaj adres..." required/><br/>
              <input type="submit" value="dodaj">
            </form>
        </fieldset>
    </div>
<?php include_once("polaczenie.php")?>
<div class="box">
        <?php 
        echo "<table border=1px>";
        echo "<tr class='tabela_head' border=1px><td></td><td></td><td></td>";
           $zapytanie = "SELECT imie, nazwisko, adres FROM uczniowie";
           foreach($polaczenie->query($zapytanie) as $wiersz){
                echo "<tr><td>".$wiersz["imie"]."</td><td>".$wiersz["nazwisko"]."</td><td>".$wiersz["adres"]."</td><tr>";
           }
           echo "</table>";
        ?>
    </div>
    <?php $polaczenie=null;//zamknięcie ?>
</body>
</html>