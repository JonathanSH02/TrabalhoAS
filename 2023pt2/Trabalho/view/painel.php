<?php
session_start();

if (!isset($_SESSION["id"])) {
    header("Location: login.php");
    exit();
}
?>

<!DOCTYPE html>
<html lang="pt-BR">

<head>
    <meta charset="UTF-8">
    <title>Bem Vindo a SneakersHead!</title>
    <style>
        body {
            margin: 0;
            padding: 0;
            font-family: Arial, sans-serif;
            overflow: auto;
            /* Para ter barra de rolagem */
        }

        .header {
            text-align: center;
            padding: 10px;
            background-color: #a02424;
            color: white;
        }

        .background-container {
            display: flex;
            flex-wrap: wrap;
            justify-content: space-around;
            align-items: center;
            height: calc(100vh - 60px);
        }

        .background-item {
            width: 25%;
            margin: 10px;
            border-radius: 10px;
            overflow: hidden;
        }

        .background-image {
            width: 100%;
            height: 290px;
            /* Define a altura das imagens */
            background-size: cover;
            background-position: center;
        }

        .background-text {
            padding: 10px;
            text-align: center;
        }

        .button-container {
            display: flex;
            justify-content: space-between;
            padding: 10px;
            background-color: #000000;
            color: rgb(223, 223, 223);
        }

        .button {
            background-color: #4CAF50;
            color: white;
            padding: 10px;
            border: none;
            border-radius: 4px;
            cursor: pointer;
        }

        .button:hover {
            background-color: #33a033;
        }
    </style>
</head>

<body>
    <div class="header">
        <h2>SNEAKERS</h2>
    </div>

    <div class="button-container">
        <form action="../index.php">
            <button type="submit">Logout</button>
    </div>
    <center>
        <h2>Bem-vindo, <?php echo $_SESSION["nome"]; ?>!</h2>
        <p>CPF: <?php echo $_SESSION["cpf"]; ?></p>
    </center>

    <div class="background-container">
        <div class="background-item">
            <div class="background-image" style="background-image: url(../img/img2.jpeg);"></div>
            <div class="background-text">
                <h3>Air Jordan 1 Obsidian</h3>
                <p>Valor: R$3.289,30</p>
                <p>Especificações: O Air Jordan 1 Retro High OG 'Obsidian' chega com bloqueio de cores clássico em uma construção tradicional toda em couro. Uma base branca nítida com sobreposições complementares em University Blue e Midnight Navy combinam-se como uma homenagem à alma mater da UNC de Michael Jordan. Os detalhes incluem detalhes perfurados na biqueira, uma etiqueta trançada da Nike no topo da lingueta de náilon acolchoada e o logotipo Jordan 'Wings' na aba do colarinho.</p>
                <button class="button">COMPRAR</button>
            </div>
        </div>

        <div class="background-item">
            <div class="background-image" style="background-image: url('../img/img3.jpeg');"></div>
            <div class="background-text">
                <h3>Air Force 1 MCA BLUE x Off White</h3>
                <p>Valor: R$22.710,00</p>
                <p>Especificações: Virgil Abloh em comemoração à estreia de sua exposição no Museu de Arte Contemporânea de Chicago em junho de 2019, juntou-se à Nike mais uma vez para produzir um Nike Air Force 1. </p>
                <button class="button">COMPRAR</button>
            </div>
        </div>

        <div class="background-item">
            <div class="background-image" style="background-image: url('../img/img4.jpeg');"></div>
            <div class="background-text">
                <h3>Air Force 4 Black Cat</h3>
                <p>Valor: R$2.199,00</p>
                <p>Especificações: A edição 2020 do Air Jordan 4 Retro 'Black Cat' traz de volta o colorido preto da silhueta clássica, que se inspira em um dos vários apelidos de Michael Jordan. Como no lançamento original de 2006, este par usa uma parte superior de camurça preta monocromática com uma entressola preta correspondente. A marca Jumpman na etiqueta de língua tecida é renderizada em Light Graphite, representando o único elemento de design contrastante do tênis. </p>
                <button class="button">COMPRAR</button>
            </div>
        </div>

        <div class="background-item">
            <div class="background-image" style="background-image: url('../img/img6.jpeg');"></div>
            <div class="background-text">
                <h3>Nike SB Dunk Low Club 58 "Gulf"</h3>
                <p>Valor: R$2.620,00</p>
                <p>Especificações: O Nike SB Dunk Low "Club Gulf 58" é uma colorway inspirada no carro de corrida Porsche 917 Gulf. O icônico Porsche 917 Gulf foi um carro de corrida recordista dos anos 1970 que ajudou a Porsche a vencer as 24 Horas de Le Mans em anos consecutivos, 1970 e 1971. O design azul e laranja do protótipo futurista do carro de corrida é imitado no SB Dunk Low “Gulf”. O emblema inspirado no automobilismo “58” no calcanhar lateral e na língua é supostamente uma referência ao Club 58, uma loja de skate que pode ter contribuído para a criação do design do “Gulf”. </p>
                <button class="button">COMPRAR</button>
            </div>
        </div>

        <div class="background-item">
            <div class="background-image" style="background-image: url('../img/img5.jpeg');"></div>
            <div class="background-text">
                <h3>Air Max Plus "WorldWide"</h3>
                <p>Valor: R$1.699,00</p>
                <p>Especificações: O pacote mundial do Swoosh está cheio de silhuetas contemporâneas e elegantes! Da mesma forma, o futuro Nike TN Air Max Plus Worldwide White Sky Blue está explodindo o mundo do tênis devido a todo o hype. Confira a reforma pitoresca e o design exclusivo que diferencia este par dos demais. Ideais para o verão, esses corredores são um policial essencial para todos os amantes de tênis. </p>
                <button class="button">COMPRAR</button>
            </div>
        </div>


    </div>

</body>

</html>