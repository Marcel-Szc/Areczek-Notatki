<?php $polaczenie = new mysqli('localhost', 'root', '', 'baza17032025', 3306);  ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>inf.03 - funkcja kwadratowa</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <header>
        <h2>BANNER</h2>
    </header>
        <section class="main">
            <section class="lewa">
                <ul>
                    <li><a href="index.php?menu=1">DELTA</a></li>
                    <li><a href="index.php?menu=2">X1,X2</a></li>
                    <li><a href="index.php?menu=3">FORM abc</a></li>
                </ul>
            </section>
            <section class="prawa">
                <?php 
                    if(isset($_POST['a']) && isset($_POST['b']) && isset($_POST['c']) && !empty($_POST['a']) && !empty($_POST['b']) &&!empty($_POST['c'])) {
                        $a = $_POST['a'];
                        $b = $_POST['b'];
                        $c = $_POST['c'];
                        $zapytanieDoda = $polaczenie->query("INSERT INTO dane(a,b,c) VALUES ($a, $b, $c);");

                        if($zapytanieDoda){
                            echo("Pomyślnie dodano a, b i c do BD");
                        }
                    }

                    if(isset($_GET['menu']) && !empty($_GET['menu'])){
                        $nrmenu = $_GET['menu'];
                        switch($nrmenu){
                            case '1':
                                echo('<h3>DELTA</h3><br><ul>');
                                $zapytanieDelta = $polaczenie->query("SELECT b*b-4*a*c as 'delta' FROM `dane`;");
                                $i = 0;
                                while(list($delta)=mysqli_fetch_row($zapytanieDelta)) {
                                    $i++;
                                    echo("<li>delta $i = $delta</li>");
                                }
                                echo('</ul>');
                                break;
                            case '2':
                                $i = 0;
                                $zapytanieX1X2 = $polaczenie->query('SELECT (-b-sqrt(b*b-4*a*c))/2*a as "x1", (-b+sqrt(b*b-4*a*c))/2*a as "x2" FROM `dane`;');
                                echo('<h3>X1, X2</h3><br><ul>');
                                while(list($x1,$x2)=mysqli_fetch_row($zapytanieX1X2)) {
                                    $i++;
                                    echo("<li>delta $i: x1 = $x1, x2 = $x2</li>");
                                }
                                echo('</ul>');
                                break;
                            case '3':
                                echo('<h3>FORMULARZ</h3>');
                                echo ("
                                    <form action='index.php' method='POST'>
                                        a: <input type='number' name='a'> <br>
                                        b: <input type='number' name='b'> <br>
                                        c: <input type='number' name='c'> <br>
                                        <input type='submit' value='dodaj do bazy'>
                                    </form>
                                ");
                                break;
                            default: 
                                echo('nie ma takiego menu');
                                break;
                        }
                    }
                    $polaczenie->close();
                ?>
            </section>
        </section>
    <footer>
        <h3>Copyright by klasa 3CT</h3>
    </footer>
</body>
</html>