<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $password = $_POST["password"];
    $hashedPassword = md5($password);
    echo "<h3>Oryginalny tekst: " . htmlspecialchars($password) . "</h3>";
    echo "<h3>Zaszyfrowany tekst (MD5): " . $hashedPassword . "</h3>";
}
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            background-color: #f4f4f4;
        }
        .container {
            background: white;
            padding: 20px;
            border-radius: 10px;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
        }
    </style>
</head>
<body>
    <div class="container">
        <h2>MD5 Hash Generator</h2>
        <form action="index.php" method="post">
            <label for="password">Wprowadź tekst:</label>
            <input type="text" id="password" name="password" required>
            <button type="submit">Zaszyfruj</button>
        </form>
    </div>
</body>
</html>