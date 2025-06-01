<?php 
include_once('db.php');
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <title>Wybór przedmiotów szkolnych</title>
    <link rel="stylesheet" href="style.css">
    <style>
       
        body {
            margin: 0;
            font-family: Arial, sans-serif;
            display: flex;
            height: 100vh;
            color: white;
            background-color: rgb(39, 39, 39);
        }

        .sidebar {
            width: 250px;
            background-color: #131313;
            padding: 20px;
            box-shadow: 2px 0 5px rgba(45, 45, 45, 0.1);
        }

        .content {
            display: flex;
            flex-direction: column;
            flex: 1;
            padding: 20px;
        }
        .content li{
            list-style: none;
        }

        h2 {
            margin-top: 0;
        }

        .checkbox-group1 {
            margin-bottom: 20px;
        }
        .checkbox-group2 {
            margin-bottom: 20px;
            height: 600px;
            overflow-y: scroll;
            width: 50%;
            margin: auto;
        }

        input[type="submit"] {
            padding: 14px 100px;
            background-color: #ff8800;
            color: white;
            border: none;
            cursor: pointer;
            border-radius: 4px;
            font-size: 20px;
        }

        input[type="submit"]:hover {
            background-color: #ff6600;
        }
    </style>
</head>
<body>

    <div class="sidebar">
        <h2>Przedmioty</h2>
        <form method="POST">
        <?php 
            if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST['subjects'])) {
                foreach ($_POST['subjects'] as $subject) {
                    $subject_clean = $conn->real_escape_string($subject);
                    $conn->query("INSERT INTO zajecia (nazwa) VALUES ('$subject_clean')");
                }
            }
        ?>
            <div class="checkbox-group1">
                <label><input type="checkbox" name="subjects[]" value="Matematyka"> Matematyka</label><br>
                <label><input type="checkbox" name="subjects[]" value="Fizyka"> Fizyka</label><br>
                <label><input type="checkbox" name="subjects[]" value="Informatyka"> Informatyka</label><br>
                <label><input type="checkbox" name="subjects[]" value="Biologia"> Biologia</label><br>
                <label><input type="checkbox" name="subjects[]" value="Chemia"> Chemia</label><br>
                <label><input type="checkbox" name="subjects[]" value="Język polski"> Język polski</label><br>
                <label><input type="checkbox" name="subjects[]" value="Język angielski"> Język angielski</label><br>
            </div>

            <div class="content">
        <h2>lista:</h2>
        <?php
        $sql = "SELECT DISTINCT nazwa FROM zajecia ORDER BY nazwa ASC";
        $result = $conn->query($sql);
        if ($result->num_rows > 0) {
            while ($row = $result->fetch_assoc()) {
                $name = htmlspecialchars($row['nazwa']);
                echo "<li>$name</li>";
            }
        } else {
            echo "Brak zajęć w bazie.";
        }
        ?>
    </div>

            <input type="submit" value="OK">
        </form>
    </div>

    <div class="checkbox-group2">
                <h3>Nowo dodane:</h3>
                <?php
                $sql = "SELECT nazwa FROM zajecia";
                $result = $conn->query($sql);
                if ($result->num_rows > 0) {
                    while ($row = $result->fetch_assoc()) {
                        $name = htmlspecialchars($row['nazwa']);
                        echo "<strong> - </strong>$name<br>";
                    }
                } else {
                    echo "Brak zajęć w bazie.";
                }
                ?>
            </div>

</body>
</html>

<?php 
$conn->close();
?>
