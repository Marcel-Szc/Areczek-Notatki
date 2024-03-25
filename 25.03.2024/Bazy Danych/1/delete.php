<?php 

    include_once("polaczenie.php");
if (isset($_POST["sikla"])) {
    $postac = $_POST['sikla'];
    $usuwanie = "DELETE FROM uczniowie WHERE idu = $postac";
    if ($polaczenie->exec($usuwanie)) {
        echo("<h1 class='Si'>Udało się usunąć ucznia!</h1>");
    }
    else {
        echo ("<h1 class='nein'>KYS</h1>");
    }
} else {
    echo ("<h1 class='nein'>NIe udało się usunąć</h1>");
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>usuwanie</title>
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
    <a href="index.php">Powrót</a>
</body>
</html>