<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Połączenie przez PDO</title>
    <style type="text/css">
        @import url('https://fonts.googleapis.com/css2?family=Madimi+One&display=swap');
        body {
            font-family: "Madimi One", sans-serif;
            font-weight: 500;
            font-style: normal;
        }
        .tabela_head {
            font-weight: bolder;
        }
        td {
            padding: 10px;
            width: 100px;
        }
        .formularz {
            width: 600px;
            margin: auto;
            margin-bottom: 30px;
        }
        input[name='nazwa'],input[name='czas_realizacji'] {
            width: 400px;
            height: 25px;
            margin: 10px;
            font-family: "Madimi One", sans-serif;
            font-weight: 500;
            font-style: normal;
        }
        input[type="submit"] {
            float: right;
            background-color: hsla(214, 30%, 17%, 1);
            color: whitesmoke;
            width: 80px;
            border: 2px solid black;
            font-family: "Madimi One", sans-serif;
            font-weight: 500;
            font-style: normal;
        }
        .box{
            width:350px;
            height: 400px;
            margin: auto;
            margin-top: 30px;
            overflow-y: scroll;
        }
        .polaczenie{
            color: green;
            text-align: center;
        }
        legend{
            text-align:center;
        }
        .main {
            height: 98vh;
            display: flex;
            flex-direction: column;
            justify-content: center;
        }
    </style>
</head>
<body>
<div class="main">
    <div class="formularz">
        <fieldset>
            <legend>Dodaj do bazy danych</legend>
            <form action="dodaj_do_bazy.php" method="post">
              <input type="text" name="nazwa" placeholder="Podaj nazwe" required/><br/>
              <input type="text" name="czas_realizacji" placeholder="Podaj czas realizacji" required/><br/>
              <input type="submit" value="dodaj">
            </form>
        </fieldset>
    </div>
<?php include_once("polaczenie.php")?>
<div class="box">
        <?php 
        echo "<table border=1px>";
        echo "<tr class='tabela_head' border=1px><td>idg</td><td>nazwa</td><td>czas realizacji</td>";
           $zapytanie = "SELECT idg, nazwa, czas_realizacji FROM gupoty";
           foreach($polaczenie->query($zapytanie) as $wiersz){
                echo "<tr><td>".$wiersz["idg"]."</td><td>".$wiersz["nazwa"]."</td><td>".$wiersz["czas_realizacji"]."</td><tr>";
           }
           echo "</table>";
        ?>
    </div>
    <?php $polaczenie=null;//zamknięcie ?>
</div>
</body>
</html>