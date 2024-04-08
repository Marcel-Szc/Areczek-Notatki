<?php include_once("polaczenie.php") ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ćwiczenie</title>
</head>
<body>
    <div>
</table>
        <table border="1">
         <td>imie</td>
         <td>nazwisko</td>
         <td>nazwa</td>
<?php 

$zapytanie2 = $polaczenie->query("SELECT imie, nazwisko, nazwa FROM widok;");
while(list($imie,$nazwisko,$nazwa)=mysqli_fetch_row($zapytanie2)) {
    echo ("
       <tr>
       <td>$imie</td>
       <td>$nazwisko</td>
       <td>$nazwa</td>
       <td>DELETE</td>
       </tr>
     ");
    // CREATE view widok AS SELECT klient.imie, klient.nazwisko, zainteresowania.nazwa FROM klient INNER JOIN zainteresowania ON klient.idk = zainteresowania.idk;
};
?>
</table>
 </div>
    <?php $polaczenie->close(); ?>
</body>
</html>