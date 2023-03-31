#!/bin/bash
echo "Pruebas que comienzan en 0"
./push_swap 0 1 2 3 4 | ./checker_OS 0 1 2 3 4
./push_swap 0 1 2 4 3 | ./checker_OS 0 1 2 4 3
./push_swap 0 1 3 2 4 | ./checker_OS 0 1 3 2 4
./push_swap 0 1 3 4 2 | ./checker_OS 0 1 3 4 2
./push_swap 0 1 4 2 3 | ./checker_OS 0 1 4 2 3
./push_swap 0 1 4 3 2 | ./checker_OS 0 1 4 3 2
./push_swap 0 2 1 3 4 | ./checker_OS 0 2 1 3 4
./push_swap 0 2 1 4 3 | ./checker_OS 0 2 1 4 3
./push_swap 0 2 3 1 4 | ./checker_OS 0 2 3 1 4
./push_swap 0 2 3 4 1 | ./checker_OS 0 2 3 4 1
./push_swap 0 2 4 1 3 | ./checker_OS 0 2 4 1 3
./push_swap 0 2 4 3 1 | ./checker_OS 0 2 4 3 1
./push_swap 0 3 1 2 4 | ./checker_OS 0 3 1 2 4
./push_swap 0 3 1 4 2 | ./checker_OS 0 3 1 4 2
./push_swap 0 3 2 1 4 | ./checker_OS 0 3 2 1 4
./push_swap 0 3 2 4 1 | ./checker_OS 0 3 2 4 1
./push_swap 0 3 4 1 2 | ./checker_OS 0 3 4 1 2
./push_swap 0 3 4 2 1 | ./checker_OS 0 3 4 2 1
./push_swap 0 4 1 2 3 | ./checker_OS 0 4 1 2 3
./push_swap 0 4 1 3 2 | ./checker_OS 0 4 1 3 2
./push_swap 0 4 2 1 3 | ./checker_OS 0 4 2 1 3
./push_swap 0 4 2 3 1 | ./checker_OS 0 4 2 3 1
./push_swap 0 4 3 1 2 | ./checker_OS 0 4 3 1 2
./push_swap 0 4 3 2 1 | ./checker_OS 0 4 3 2 1


echo "Pruebas que comienzan en 1"

./push_swap 1 0 2 3 4 | ./checker_OS 1 0 2 3 4
./push_swap 1 0 2 4 3 | ./checker_OS 1 0 2 4 3
./push_swap 1 0 3 2 4 | ./checker_OS 1 0 3 2 4
./push_swap 1 0 3 4 2 | ./checker_OS 1 0 3 4 2
./push_swap 1 0 4 2 3 | ./checker_OS 1 0 4 2 3
./push_swap 1 0 4 3 2 | ./checker_OS 1 0 4 3 2
./push_swap 1 2 0 3 4 | ./checker_OS 1 2 0 3 4
./push_swap 1 2 0 4 3 | ./checker_OS 1 2 0 4 3
./push_swap 1 2 3 0 4 | ./checker_OS 1 2 3 0 4
./push_swap 1 2 3 4 0 | ./checker_OS 1 2 3 4 0
./push_swap 1 2 4 0 3 | ./checker_OS 1 2 4 0 3
./push_swap 1 2 4 3 0 | ./checker_OS 1 2 4 3 0
./push_swap 1 3 0 2 4 | ./checker_OS 1 3 0 2 4
./push_swap 1 3 0 4 2 | ./checker_OS 1 3 0 4 2
./push_swap 1 3 2 0 4 | ./checker_OS 1 3 2 0 4
./push_swap 1 3 2 4 0 | ./checker_OS 1 3 2 4 0
./push_swap 1 3 4 0 2 | ./checker_OS 1 3 4 0 2
./push_swap 1 3 4 2 0 | ./checker_OS 1 3 4 2 0
./push_swap 1 4 0 2 3 | ./checker_OS 1 4 0 2 3
./push_swap 1 4 0 3 2 | ./checker_OS 1 4 0 3 2
./push_swap 1 4 2 0 3 | ./checker_OS 1 4 2 0 3
./push_swap 1 4 2 3 0 | ./checker_OS 1 4 2 3 0
./push_swap 1 4 3 0 2 | ./checker_OS 1 4 3 0 2
./push_swap 1 4 3 2 0 | ./checker_OS 1 4 3 2 0


echo "Pruebas que comienzan en 2"

./push_swap  2 0 1 3 4 | ./checker_OS 2 0 1 3 4
./push_swap  2 0 1 4 3 | ./checker_OS 2 0 1 4 3
./push_swap  2 0 3 1 4 | ./checker_OS 2 0 3 1 4
./push_swap  2 0 3 4 1 | ./checker_OS 2 0 3 4 1
./push_swap  2 0 4 1 3 | ./checker_OS 2 0 4 1 3
./push_swap  2 0 4 3 1 | ./checker_OS 2 0 4 3 1
./push_swap  2 1 0 3 4 | ./checker_OS 2 1 0 3 4
./push_swap  2 1 0 4 3 | ./checker_OS 2 1 0 4 3
./push_swap  2 1 3 0 4 | ./checker_OS 2 1 3 0 4
./push_swap  2 1 3 4 0 | ./checker_OS 2 1 3 4 0
./push_swap  2 1 4 0 3 | ./checker_OS 2 1 4 0 3
./push_swap  2 1 4 3 0 | ./checker_OS 2 1 4 3 0
./push_swap  2 3 0 1 4 | ./checker_OS 2 3 0 1 4
./push_swap  2 3 0 4 1 | ./checker_OS 2 3 0 4 1
./push_swap  2 3 1 0 4 | ./checker_OS 2 3 1 0 4
./push_swap  2 3 1 4 0 | ./checker_OS 2 3 1 4 0
./push_swap  2 3 4 0 1 | ./checker_OS 2 3 4 0 1
./push_swap  2 3 4 1 0 | ./checker_OS 2 3 4 1 0
./push_swap  2 4 0 1 3 | ./checker_OS 2 4 0 1 3
./push_swap  2 4 0 3 1 | ./checker_OS 2 4 0 3 1
./push_swap  2 4 1 0 3 | ./checker_OS 2 4 1 0 3
./push_swap  2 4 1 3 0 | ./checker_OS 2 4 1 3 0
./push_swap  2 4 3 0 1 | ./checker_OS 2 4 3 0 1
./push_swap  2 4 3 1 0 | ./checker_OS 2 4 3 1 0

echo "Pruebas que comienzan en 3"

./push_swap  3 0 1 2 4 | ./checker_OS 3 0 1 2 4
./push_swap  3 0 1 4 2 | ./checker_OS 3 0 1 4 2
./push_swap  3 0 2 1 4 | ./checker_OS 3 0 2 1 4
./push_swap  3 0 2 4 1 | ./checker_OS 3 0 2 4 1
./push_swap  3 0 4 1 2 | ./checker_OS 3 0 4 1 2
./push_swap  3 0 4 2 1 | ./checker_OS 3 0 4 2 1
./push_swap  3 1 0 2 4 | ./checker_OS 3 1 0 2 4
./push_swap  3 1 0 4 2 | ./checker_OS 3 1 0 4 2
./push_swap  3 1 2 0 4 | ./checker_OS 3 1 2 0 4
./push_swap  3 1 2 4 0 | ./checker_OS 3 1 2 4 0
./push_swap  3 1 4 0 2 | ./checker_OS 3 1 4 0 2
./push_swap  3 1 4 2 0 | ./checker_OS 3 1 4 2 0
./push_swap  3 2 0 1 4 | ./checker_OS 3 2 0 1 4
./push_swap  3 2 0 4 1 | ./checker_OS 3 2 0 4 1
./push_swap  3 2 1 0 4 | ./checker_OS 3 2 1 0 4
./push_swap  3 2 1 4 0 | ./checker_OS 3 2 1 4 0
./push_swap  3 2 4 0 1 | ./checker_OS 3 2 4 0 1
./push_swap  3 2 4 1 0 | ./checker_OS 3 2 4 1 0
./push_swap  3 4 0 1 2 | ./checker_OS 3 4 0 1 2
./push_swap  3 4 0 2 1 | ./checker_OS 3 4 0 2 1
./push_swap  3 4 1 0 2 | ./checker_OS 3 4 1 0 2
./push_swap  3 4 1 2 0 | ./checker_OS 3 4 1 2 0
./push_swap  3 4 2 0 1 | ./checker_OS 3 4 2 0 1
./push_swap  3 4 2 1 0 | ./checker_OS 3 4 2 1 0

echo "Pruebas que comienzan en 4"

./push_swap  4 0 1 2 3 | ./checker_OS 4 0 1 2 3
./push_swap  4 0 1 3 2 | ./checker_OS 4 0 1 3 2
./push_swap  4 0 2 1 3 | ./checker_OS 4 0 2 1 3
./push_swap  4 0 2 3 1 | ./checker_OS 4 0 2 3 1
./push_swap  4 0 3 1 2 | ./checker_OS 4 0 3 1 2
./push_swap  4 0 3 2 1 | ./checker_OS 4 0 3 2 1
./push_swap  4 1 0 2 3 | ./checker_OS 4 1 0 2 3
./push_swap  4 1 0 3 2 | ./checker_OS 4 1 0 3 2
./push_swap  4 1 2 0 3 | ./checker_OS 4 1 2 0 3
./push_swap  4 1 2 3 0 | ./checker_OS 4 1 2 3 0
./push_swap  4 1 3 0 2 | ./checker_OS 4 1 3 0 2
./push_swap  4 1 3 2 0 | ./checker_OS 4 1 3 2 0
./push_swap  4 2 0 1 3 | ./checker_OS 4 2 0 1 3
./push_swap  4 2 0 3 1 | ./checker_OS 4 2 0 3 1
./push_swap  4 2 1 0 3 | ./checker_OS 4 2 1 0 3
./push_swap  4 2 1 3 0 | ./checker_OS 4 2 1 3 0
./push_swap  4 2 3 0 1 | ./checker_OS 4 2 3 0 1
./push_swap  4 2 3 1 0 | ./checker_OS 4 2 3 1 0
./push_swap  4 3 0 1 2 | ./checker_OS 4 3 0 1 2
./push_swap  4 3 0 2 1 | ./checker_OS 4 3 0 2 1
./push_swap  4 3 1 0 2 | ./checker_OS 4 3 1 0 2
./push_swap  4 3 1 2 0 | ./checker_OS 4 3 1 2 0
./push_swap  4 3 2 0 1 | ./checker_OS 4 3 2 0 1
./push_swap  4 3 2 1 0 | ./checker_OS 4 3 2 1 0