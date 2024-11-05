<?php
    function fizzBuzz(){
        for($i = 1; $i <= 100; $i++){
            echo ($i % 3 == 0 && $i % 5 == 0) ? "FizzBuzz\n" :
                (($i % 3 == 0) ? "Fizz\n" :
                (($i % 5 == 0)? "Buzz\n" : "$i\n")); 
        }
    }
    fizzBuzz();
?>