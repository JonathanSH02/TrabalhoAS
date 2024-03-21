<?php
session_start();
include("conexao.php");
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $cpf = mysqli_real_escape_string($mysqli, $_POST['cpf']);
    $senha = mysqli_real_escape_string($mysqli, $_POST["senha"]);

    $query = "SELECT * from usuarios where cpf = '{$cpf}' and senha = '{$senha}'";
    $resultado = mysqli_query($mysqli, $query);
    $conta = mysqli_fetch_assoc($resultado);

    if ($conta == null) {
        header("Location:../view/login.php?login=fail");
    } else {
        function logar($id, $cpf, $nome)
        {
            $_SESSION['id'] = $id;
            $_SESSION['cpf'] = $cpf;
            $_SESSION['nome'] = $nome;
        }
        logar($conta['id'], $conta['cpf'], $conta['nome']);
        header("Location:../view/painel.php");
    }
} else {
    header("Location:../view/login.php?login=fail");
}
