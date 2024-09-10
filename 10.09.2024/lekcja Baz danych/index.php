<?php 
require_once("connect.php");
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Syntax error on line -1</title>
</head>
<body>
    <div style="text-align:center;">
        <h1>PHP - MYSQL - CRUD</h1>
    </div>
    <hr style="margin-top:50px;margin-bottom:20px;">
    <div class="czytaj" style="text-align: center;">
    <?php 
        //SELECT * FROM zakupy WHERE 1
        $zapytanieSel = $pol->query("SELECT id,nazwa,cena FROM zakupy");
        echo("<ul>");
        while(list($id,$nazwa,$cena)=mysqli_fetch_row($zapytanieSel)){
            echo("<li> $nazwa: cena $cena zł <a href='usun.php?id=$id'> usun </a> </li>");
        }
        echo("</ul>");
    ?>
    </div>
</body>
</html>
<?php 
$pol->close();
?>