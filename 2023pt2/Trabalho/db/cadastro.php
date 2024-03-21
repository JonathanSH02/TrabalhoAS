<?php

include("conexao.php");

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $cpf = mysqli_real_escape_string($mysqli, $_POST['cpf']);
    $nome = mysqli_real_escape_string($mysqli, $_POST['nome']);
    $senha = mysqli_real_escape_string($mysqli, $_POST["senha"]);
    $senha2 = mysqli_real_escape_string($mysqli, $_POST["senha2"]);

    $cpf = preg_replace("/[^0-9]/", "", $cpf);

    $digito1 = 0;
    $digito2 = 0;
    $vcpf = true;

    if (strlen($cpf) != 11) {
        $vcpf = false;
    }

    for ($i = 0, $x = 10; $i <= 8; $i++, $x--) {
        $digito1 += $cpf[$i] * $x;
    }

    for ($i = 0, $x = 11; $i <= 9; $i++, $x--) {
        if (str_repeat($i, 11) == $cpf) {
            $vcpf = false;
        }
        $digito2 += $cpf[$i] * $x;
    }

    $calculo1 = (($digito1 % 11) < 2) ? 0 : 11 - ($digito1 % 11);
    $calculo2 = (($digito2 % 11) < 2) ? 0 : 11 - ($digito2 % 11);
    if ($calculo1 != $cpf[9] || $calculo2 != $cpf[10]) {
        $vcpf = false;
    } 

    echo "Senha: " . $senha . "<br>";
    echo "Senha2: " . $senha2 . "<br>";

    $senha = trim($senha);
    $senha2 = trim($senha2);

    if ($senha != $senha2) {
        echo "Senhas diferentes. Redirecionando...";
        header("Location:../view/cadastro.php?senha=false");
        exit;
    }

    if ($vcpf){
        // Verifica se o CPF já existe no banco de dados
        $query = "SELECT * from usuarios where cpf = '{$cpf}'";
        $resultado = mysqli_query($mysqli, $query);
        $conta = mysqli_fetch_assoc($resultado);

        if ($conta != null) {
            header("Location:../view/cadastro.php?cpf=false");
        } else {
            // CPF válido e não cadastrado, proceda com a inserção no banco de dados
            $query = "INSERT INTO usuarios (cpf, nome, senha) values ('{$cpf}','{$nome}','{$senha}')";
            $result = mysqli_query($mysqli, $query);

            if ($result) {
                header("Location:../view/login.php?cadastro=true");
            } else {
                header("Location:../view/cadastro.php?cadastro=false");
            }
        }
    } else {
        header("Location:../view/cadastro.php?cpf=falses");
    }

    $mysqli->close();
}
