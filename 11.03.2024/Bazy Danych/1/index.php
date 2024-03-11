<?php include_once("polaczenie.php")?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>radosc</title>
    <style type="text/css">
        @import url('https://fonts.googleapis.com/css2?family=Madimi+One&display=swap');
        body {
            font-family: "Madimi One", sans-serif;
            font-weight: 500;
            font-style: normal;
        }
        .tabela_head {
            font-weight: bolder;
        }
        td {
            padding: 10px;
            width: 100px;
        }
        .formularz {
            width: 600px;
            margin: auto;
            margin-bottom: 30px;
        }
        input[name='nazwa'],input[name='czas_realizacji'] {
            width: 400px;
            height: 25px;
            margin: 10px;
            font-family: "Madimi One", sans-serif;
            font-weight: 500;
            font-style: normal;
        }
        input[type="submit"] {
            float: right;
            background-color: hsla(214, 30%, 17%, 1);
            color: whitesmoke;
            width: 80px;
            border: 2px solid black;
            font-family: "Madimi One", sans-serif;
            font-weight: 500;
            font-style: normal;
        }
        .box{
            width:350px;
            height: 400px;
            margin: auto;
            margin-top: 30px;
            overflow-y: scroll;
        }
        .polaczenie{
            color: green;
            text-align: center;
        }
        legend{
            text-align:center;
        }
        .main {
            height: 98vh;
            display: flex;
            flex-direction: column;
            justify-content: center;
        }
    </style>
</head>
<body>
<nav> 
    <a href="index.php"><div class="home">HOME</div></a>
    <a href="lista.php"><div class="lista">LISTA</div></a>
</nav>
<div class="main">
   <p>Autor to Lester Crest, i żąda od ciebie 98% az napadu na kasyno</p>

<footer>
    Rozmiar Lestera: 43/43
</footer>
</body>
</html>