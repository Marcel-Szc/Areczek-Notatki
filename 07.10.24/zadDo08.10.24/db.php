<?php 
try {
    $conn = new PDO("mysql:host=localhost;dbname=my_database","root","");
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
} catch(PDOException $e) {
    echo "Polaczenie nie udane: ". $e->getMessage();
}
?>