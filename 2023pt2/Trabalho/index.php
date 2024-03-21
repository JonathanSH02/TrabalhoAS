<!DOCTYPE html>
<html lang="pt-BR">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Inicio</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 0;
            background-color: #f2f2f2;
        }

        header {
            background-color: #333;
            color: white;
            padding: 10px;
            text-align: center;
        }

        #login-btn,
        #cadastro-btn {
            float: right;
            margin-right: 20px;
            margin-top: 5px;
            padding: 8px 15px;
            background-color: #4CAF50;
            color: white;
            border: none;
            border-radius: 4px;
            cursor: pointer;
        }

        #produtos {
            margin: 20px;
            padding: 20px;
            background-color: white;
            border-radius: 8px;
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
    </style>
</head>

<body>

    <header>
        <h1>Sneakers</h1>
        <form action="view/login.php" method="post">
            <button id="login-btn">Login</button>
        </form>
        <form action="view/cadastro.php" method="post">
            <button id="cadastro-btn">Cadastro</button>
        </form>
    </header>

    <div class="background-container">
        <div class="background-item">
            <div class="background-image" style="background-image: url(img/img2.jpeg);"></div>
            <div class="background-text">
                <h3>Air Jordan 1 Obsidian</h3>
                <p>Valor: R$3.289,30</p>
                <p>Especificações: O Air Jordan 1 Retro High OG 'Obsidian' chega com bloqueio de cores clássico em uma construção tradicional toda em couro. Uma base branca nítida com sobreposições complementares em University Blue e Midnight Navy combinam-se como uma homenagem à alma mater da UNC de Michael Jordan. Os detalhes incluem detalhes perfurados na biqueira, uma etiqueta trançada da Nike no topo da lingueta de náilon acolchoada e o logotipo Jordan 'Wings' na aba do colarinho.</p>
                <form action="view/login.php" method="post">
                <button class="submit">COMPRAR</button>
                </form>
            </div>
        </div>
        <div class="background-item">
            <div class="background-image" style="background-image: url('img/img4.jpeg');"></div>
            <div class="background-text">
                <h3>Air Force 4 Black Cat</h3>
                <p>Valor: R$2.199,00</p>
                <p>Especificações: A edição 2020 do Air Jordan 4 Retro 'Black Cat' traz de volta o colorido preto da silhueta clássica, que se inspira em um dos vários apelidos de Michael Jordan. Como no lançamento original de 2006, este par usa uma parte superior de camurça preta monocromática com uma entressola preta correspondente. A marca Jumpman na etiqueta de língua tecida é renderizada em Light Graphite, representando o único elemento de design contrastante do tênis. </p>
                <form action="view/login.php" method="post">
                <button class="submit">COMPRAR</button>
                </form>
            </div>
        </div>
        <div class="background-item">
            <div class="background-image" style="background-image: url('img/img6.jpeg');"></div>
            <div class="background-text">
                <h3>Nike SB Dunk Low Club 58 "Gulf"</h3>
                <p>Valor: R$2.620,00</p>
                <p>Especificações: O Nike SB Dunk Low "Club Gulf 58" é uma colorway inspirada no carro de corrida Porsche 917 Gulf. O icônico Porsche 917 Gulf foi um carro de corrida recordista dos anos 1970 que ajudou a Porsche a vencer as 24 Horas de Le Mans em anos consecutivos, 1970 e 1971. O design azul e laranja do protótipo futurista do carro de corrida é imitado no SB Dunk Low “Gulf”. O emblema inspirado no automobilismo “58” no calcanhar lateral e na língua é supostamente uma referência ao Club 58, uma loja de skate que pode ter contribuído para a criação do design do “Gulf”. </p>
                <form action="view/login.php" method="post">
                <button class="submit">COMPRAR</button>
                </form>
            </div>
        </div>
    </div>
</body>

</html>