<?php 
if(isset($_POST['efekt'])) {
    echo "<h2>{$_POST['efekt']}</h2>";
}else {
    echo "NIE MA";
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jeden</title>
</head>
<body>
<nav> 
    <a href="index.php"><div class="home">HOME</div></a>
    <a href="lista.php"><div class="lista">LISTA</div></a>
</nav>
</body>
</html>