<?php

   /* try
   {
      $pdo = new PDO('mysql:host=localhost;
      dbname=bazazadaniowwa','root', '');
      echo 'Połączono';
   }
   catch(PDOException $e)
   {
      echo 'nie połączono, a to dlaczego: '
       . $e->getMessage();
   } */

  /* $conn = new mysqli("localhost", "root",  "", "bazazadaniowwa", 3306);
   if($conn->connect_error){
      echo("Nie połączono(ale mysqli)");
   } else 
      echo("Połączono(ale mysqli)") */

  /* $url = "data.json";
  $json = json_decode(file_get_contents($url), true);
  foreach($json as $key => $value) {
    echo( print_r($json));
  }; */
  /* $dsn = "DRIVER={SQL server};SERVER=localhost;3306;DATABASE=bazazadaniowwa";
  $conn = odbc_connect($dsn, 'root','');
  if($conn) {
    echo("Polaczono(ale odbc)");
  } else {
    echo("nie polaczono(ale odbc)");
  } */
?>