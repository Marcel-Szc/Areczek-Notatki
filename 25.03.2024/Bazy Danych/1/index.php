<?php include_once("polaczenie.php"); ?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Kartkówka</title>
    <style type="text/css">
        @import url('https://fonts.googleapis.com/css2?family=Edu+NSW+ACT+Foundation:wght@400..700&display=swap');
          body {
            font-family: "Edu NSW ACT Foundation", cursive;
            font-optical-sizing: auto;
            font-weight: <weight>;
            font-style: normal;
          }
          .nein {
            color: red;
          }
          .Si {
            color: green;
          }

    </style>
</head>
<body>
    <form action="delete.php" method="post">
        <select name="sikla" onchange=this.form.submit()>
            <option value="wybor">Wybierz...</option>
            <?php 
            $zapytanie = "SELECT idu, imie, nazwisko FROM uczniowie";
            foreach ($polaczenie->query($zapytanie) as $wiersz) 
            {
                echo
                  (" <option value=".$wiersz["idu"]. ">" .$wiersz["imie"]. "  " .$wiersz["nazwisko"]. "</option> ");
            }
            ?>
        </select>
    </form>
</body>
</html>