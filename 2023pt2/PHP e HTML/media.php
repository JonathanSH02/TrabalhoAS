<?php

    //criar um algoritimo que verifique a nota media de UM aluno e 
    //retornar a mensagem APROVADO se a nota for => a 7, se a nota media for =< a 7 deve mostrar que foi REPROVADO
    
    $n1=10;
    $n2=6;
    $media=($n1+$n2)/2;
    
    if($media >= 7){
        print "APROVADO";
    }else {
        print "REPROVADO";
    }
    
    
?>