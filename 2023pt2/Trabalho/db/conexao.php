<?php

    $host = "localhost";
    $usuario = "root";
    $banco = "loginr";
    $senha = "";

    $mysqli = new mysqli($host, $usuario, $senha, $banco);

    if ($mysqli->connect_error) {
        die("Erro na conexão com o banco de dados: " . $mysqli->connect_error);
    }
?>