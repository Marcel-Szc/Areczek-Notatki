<?php $polaczenie = new mysqli('localhost', 'root', '', 'obliczeniaarek1', 3306);  ?>
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
                    <li><a href="index.php?menu=1">Pole koła</a></li>
                    <li><a href="index.php?menu=2">Pole Rombu</a></li>
                    <li><a href="index.php?menu=3">pole trójkąta</a></li>
                </ul>
            </section>
            <section class="prawa">
                <?php 
                    if(isset($_POST['a']) && isset($_POST['b']) && isset($_POST['c']) && !empty($_POST['a']) && !empty($_POST['b']) &&!empty($_POST['c'])) {
                        $a = $_POST['a'];
                        $b = $_POST['b'];
                        $c = $_POST['c'];
                        $zapytanieDoda = $polaczenie->query("INSERT INTO trojkat(a,b,c) VALUES ($a, $b, $c);");

                        if($zapytanieDoda){
                            echo("Pomyślnie dodano a, b i c do trójkąta");
                        }
                    }

                    if(isset($_GET['menu']) && !empty($_GET['menu'])){
                        $nrmenu = $_GET['menu'];
                        switch($nrmenu){
                            case '1':
                                echo('<h3>Pole koła </h3><br><ul>');
                                $zapytaniekolo = $polaczenie->query("SELECT promien as 'pro' FROM `koło`;");
                                $i = 0;
                                while(list($pro)=mysqli_fetch_row($zapytaniekolo)) {
                                    $i++;
                                    $poleK = pi() * $pro * $pro;
                                    echo("<li>Pole koła $i = $poleK</li>");
                                }
                                echo('</ul>');
                                break;
                            case '2':
                                // SELECT (wysokosc * dlugosc) / 2 AS poleRombu FROM `romb`;
                                $i = 0;
                                $zapytanieRomb = $polaczenie->query('SELECT (wysokosc * dlugosc) / 2 AS poleRombu FROM `romb`;');
                                echo('<h3>Pole rombu</h3><br><ul>');
                                while(list($poleRombu)=mysqli_fetch_row($zapytanieRomb)) {
                                    $i++;
                                    echo("<li>Pole rombu $i: $poleRombu</li>");
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
                                $i = 0;
                                $zapytanieTrojkat = $polaczenie->query('SELECT a, b, c FROM `trojkat`;');
                                echo('<h3>Heron</h3><br><ul>');
                                while(list($a,$b,$c)=mysqli_fetch_row($zapytanieTrojkat)) {
                                    $i++;
                                    $p = ($a + $b + $c) / 2;
                                    $poleTrojkata = sqrt($p * ($p - $a) * ($p - $b) * ($p - $c));
                                    echo("<li>Pole trójkąta $i: $poleTrojkata</li>");
                                }
                                echo('</ul>');
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