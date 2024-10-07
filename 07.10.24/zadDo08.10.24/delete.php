<?php 
include_once("db.php");

$id = $_GET['id'];

$sql = "DELETE FROM users WHERE id=:id";
$stmt = $conn->prepare($sql);
$stmt->bindParam(':id', $id);

if ($stmt->execute()) {
    echo "użytkownik usunięty";
} else {
    echo "Błąd podczas usuwania użytkownika";
}
$conn = null;
?>