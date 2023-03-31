#!/bin/bash
echo "Pruebas que comienzan en 0"
./push_swap 0 2 3 1 | ./checker_OS 0 2 3 1
./push_swap 0 2 1 3 | ./checker_OS 0 2 1 3
./push_swap 0 1 2 3 | ./checker_OS 0 1 2 3
./push_swap 0 1 3 2 | ./checker_OS 0 1 3 2
./push_swap 0 3 1 2 | ./checker_OS 0 3 1 2
./push_swap 0 3 2 1 | ./checker_OS 0 3 2 1
echo "Pruebas que comienzan en 1"
./push_swap 1 2 3 0 | ./checker_OS 1 2 3 0
./push_swap 1 2 0 3 | ./checker_OS 1 2 0 3
./push_swap 1 3 2 0 | ./checker_OS 1 3 2 0
./push_swap 1 3 0 2 | ./checker_OS 1 3 0 2
./push_swap 1 0 2 3 | ./checker_OS 1 0 2 3
./push_swap 1 0 3 2 | ./checker_OS 1 0 3 2
echo "Pruebas que comienzan en 2"
./push_swap 2 3 0 1 | ./checker_OS 2 3 0 1
./push_swap 2 3 1 0 | ./checker_OS 2 3 1 0
./push_swap 2 1 0 3 | ./checker_OS 2 1 0 3
./push_swap 2 1 3 0 | ./checker_OS 2 1 3 0
./push_swap 2 0 3 1 | ./checker_OS 2 0 3 1
./push_swap 2 0 1 3 | ./checker_OS 2 0 1 3
echo "Pruebas que comienzan en 3"
./push_swap 3 2 1 0 | ./checker_OS 3 2 1 0
./push_swap 3 2 0 1 | ./checker_OS 3 2 0 1
./push_swap 3 1 2 0 | ./checker_OS 3 1 2 0
./push_swap 3 1 0 2 | ./checker_OS 3 1 0 2
./push_swap 3 0 1 2 | ./checker_OS 3 0 1 2
./push_swap 3 0 2 1 | ./checker_OS 3 0 2 1

echo "Pruebas que comienzan en 0"
./push_swap 0 2 3 1
echo "       FIN"
./push_swap 0 2 1 3 
echo "       FIN"
./push_swap 0 1 2 3 
echo "       FIN"
./push_swap 0 1 3 2 
echo "       FIN"
./push_swap 0 3 1 2 
echo "       FIN"
./push_swap 0 3 2 1 
echo "       FIN"
echo "Pruebas que comienzan en 1"
./push_swap 1 2 3 0 
echo "       FIN"
./push_swap 1 2 0 3 
echo "       FIN"
./push_swap 1 3 2 0 
echo "       FIN"
./push_swap 1 3 0 2 
echo "       FIN"
./push_swap 1 0 2 3 
echo "       FIN"
./push_swap 1 0 3 2 
echo "       FIN"
echo "Pruebas que comienzan en 2"
./push_swap 2 3 0 1 
echo "       FIN"
./push_swap 2 3 1 0 
echo "       FIN"
./push_swap 2 1 0 3 
echo "       FIN"
./push_swap 2 1 3 0 
echo "       FIN"
./push_swap 2 0 3 1 
echo "       FIN"
./push_swap 2 0 1 3 
echo "       FIN"
echo "Pruebas que comienzan en 3"
./push_swap 3 2 1 0 
echo "       FIN"
./push_swap 3 2 0 1 
echo "       FIN"
./push_swap 3 1 2 0 
echo "       FIN"
./push_swap 3 1 0 2 
echo "       FIN"
./push_swap 3 0 1 2 
echo "       FIN"
./push_swap 3 0 2 1 
echo "       FIN"

