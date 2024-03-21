<!DOCTYPE html>
<html lang="pt-BR">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cadastro de Usuário</title>
    <style>
        body {
            margin: 0;
            padding: 100px;
            font-family: Arial, sans-serif;
            background-image: url('../img/img1.jpeg');
            background-size: cover; 
            background-position: center; 
            background-repeat: no-repeat; 
        }

        .container {
            width: 300px;
            padding: 16px;
            margin: 80px auto;
            background-color: rgba(248, 248, 248, 0.8);
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
            border-radius: 8px;
        }

        h2 {
            text-align: center; 
        }

        label {
            
            display: block;
            margin: 10px 0;
        } 

        input {
            width: 100%;
            padding: 10px;
            margin: 8px 0;
            display: inline-block;
            box-sizing: border-box;
            border: 1px solid #ccc;
            border-radius: 4px;
        }

        button {
            background-color: #4CAF50;
            color: white;
            padding: 10px 15px;
            margin: 10px 0;
            border: none;
            border-radius: 4px;
            cursor: pointer;
            width: 100%;
        }

        button:hover {
            background-color: #45a049;
        }
    </style>
</head>

<body>
    <div class="container">
        <center>
            <h2>Cadastro de Usuário</h2>
            <form action="../db/cadastro.php" method="POST">
                <label for="cpf">CPF:<br></label>
                <input type="text" name="cpf" maxlength="15" required>
                <br>
                <label for="nome">Nome:<br></label>
                <input type="text" name="nome" required>
                <br>
                <label for="senha">Senha:<br></label>
                <input type="password" name="senha" required>
                <br>
                <label for="senha2">Confirmar a Senha:<br></label>
                <input type="password" name="senha2" required>
                <br><br>
                <button type="submit">Cadastrar-se</button>
            </form>
        </center>
    </div>
</body>

</html>