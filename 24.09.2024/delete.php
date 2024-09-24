<?php 
include_once("db.php");

$id = $_GET['id'];

$sql = "DELETE FROM users WHERE id=$id";

if ($conn->query($sql) === TRUE) {
    echo "użytkownik usunięty";
} else {
    echo "błąd: ".$sql . "<br> ", $conn->error;
}
$conn->close();
?>