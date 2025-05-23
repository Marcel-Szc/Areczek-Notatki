<?php 
include_once("db.php"); 
$id = $_GET['id'];
$sql = "SELECT * FROM users WHERE id = :id";
$stmt = $conn->prepare($sql);
$stmt->bindParam(':id', $id);
$stmt->execute();
$user = $stmt->fetch(PDO::FETCH_ASSOC)
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Edytuj użytkownika</title>
</head>
<body>
    <h2>Edytuj Użytkownika</h2>
    <form action="update.php" method= "post">
        <input type="hidden" name="id" value="<?php echo $user['id']; ?>">
        <label for="name">Imię:</label>
        <input type="text" id="name" name="name" value="<?php echo $user['name']; ?>" required><br>
        <label for="email">Email:</label>
        <input type="email" id="email" name="email" value="<?php echo $user['email']; ?>" required><br>
        <input type="submit" value="Aktualizuj">
    </form>
</body>
</html>