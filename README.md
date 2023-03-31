# Push-Swap 42cursus

## Description 

This project **sorts data into a stack** (int array), with a **limited set of instructions**, and using the least number of instructions. For this purpose I used the algorithm Radix wich is functional. 

The maximum grade that can be aspired to with this algorithm is 90 points, including some improvements in the code. 
I chose this algorithm because it is very easy to understand and the time to invest in its development is minimal compared to other sorting algorithms.

<img width="1014" alt="Screen Shot 2023-03-30 at 1 35 07 PM" src="https://user-images.githubusercontent.com/121127625/228823652-a0c1bd4a-4991-42d7-bc12-42eb442be9d3.png">


* Project developed in 'C' language.
* The project compiles with the 'norma' (Norminette).
* The makefile compiles the program (and the libft needed) with the name: **push_swap**

## Mandatory part

### How it works?
The push_swap program will receive as an argument the stack a in the format of a list of integers. The first argument is that be on top of the stack. (position 0 of the array)

The program shows the list of instructions (shortest possible) to order the 'stack a', from lowest to highest where the lowest is at the top of the stack (position 0). The instructions are separated by a “\n”.

If no parameters are specified, the program displays nothing.

On case of error, "Error" followed by a newline “\n” is displayed on the standard error output. (2).
Some of the possible errors are: arguments that are not integers,
arguments greater than an int, and/or find duplicate numbers.



### The rules of the game
Only 2 stack can be used to complete the sort game: 'stack_a' and 'stack_b'. The goal is to order the 'stack_a'.

The movements allowed are:

* <b>SA => Swap A</b> - swap the first two elements on top of 'stack a'. Does not make nothing if there are one or fewer elements.
* <b>SB => Swap B</b> - swap the first two elements on top of 'stack b'. Does not make nothing if there are one or fewer elements.
* <b>SS => Swap A y swap B</b> at the same time.

<i>Example of SA</i>
<p align="center">
<img width="1663" alt="Screen Shot 2023-03-31 at 2 27 59 PM" src="https://user-images.githubusercontent.com/121127625/229120030-662b9189-df9a-4d7d-8c7b-dd7dbbc999b4.png">

</p>

* <b>PA => Push A </b>- takes the first item from 'stack b' and puts it on top of 'stack a'. Does nothing if b is empty.
* <b>PB => Push B </b>- takes the first element of 'stack a' and puts it on top of 'stack b'. Does nothing if a is empty.

<i>Example of PA:</i>
<p align="center">
<img width="1685" alt="Screen Shot 2023-03-31 at 2 09 23 PM" src="https://user-images.githubusercontent.com/121127625/229116180-4a699e19-e4b1-4621-bf11-2d4b6c3c7671.png">
</p>

* <b>RA => Rotate A </b> - shifts all 'stack A' items up by one position, so that the first element becomes the last.
* <b>RB => Rotate B </b>- shifts all elements of 'stack B' up one position, so that the first element becomes the last.
* <b>RR => Rotate A and rotate B </b>- scroll all the elements of the 'stack a'at the same time and from 'stack b' one position up, so that the first element is becomes the last at the both stacks.

<i>Example of RA:</i>
<p align="center">
<img width="1663" alt="Screen Shot 2023-03-31 at 2 17 14 PM" src="https://user-images.githubusercontent.com/121127625/229117821-7f4239cf-8f06-4835-bc5a-0da1b11f8ab4.png">
</p>

* <b>RRA => Reverse rotate A </b>- scrolls down all items in the 'stack A' by a position, so that the last element becomes the first.
* <b>RRB => Reverse rotate B </b>- scrolls down all items in the 'stack B' by a position, so that the last element becomes the first.
* <b>RRR => Reverse rotate A and B</b> - scrolls down all items in the 'stack A' and 'B' by a position at the same time. So that the last element becomes the first at both stacks. 

<i>Example of RRA:</i>
<p align="center">
<img width="1663" alt="Screen Shot 2023-03-31 at 2 24 02 PM" src="https://user-images.githubusercontent.com/121127625/229119129-6440813e-302f-4abb-b26f-0eac5d39036a.png">
</p>

## Usage

The program can be ran in two ways:
```shell
$> ./push_swap 5 20 -9 ...
```
```shell
$> ./push_swap "5 20 -9 ..."
```
The maximum number of ints to sort is 500.


You can use the rule **'make'** to compile the program and run it.
```shell
$> make 
```

With the rule **'make clean'** you can delete the program.
```shell
$> make clean
```
 
With the rules **'make fclean'** you can delete all the object files (*.o).
```shell
$> make fclean
```


## Test it

Several files are included to check the operation of the push_swap program.

* To test a **random number of elements** you can use the 'checker' program (IOS system). You can use it doing this comand:
```shell
$> ./push_swap num1 num2 num3 | ./checker_OS num1 num2 num3
```

* To **check 4 numbers** to sort. You can use the file (sh) 'myowntest.sh', which tests the ordering of all possible combinations of 4 numbers. To try it, you have to use this comand: 
```shell
$> bash myowntest.sh
```
* To **check 5 numbers** to sort. You can use the file (sh) 'myowntest5.sh', which tests the ordering of all possible combinations of 4 numbers. To try this you have to put this comand:
```shell
$> bash myowntest5.sh
```
* To **check a full program** you can use the file (sh) 'push_swap_test.sh', wich tests check all the input errors, to sort basic input (0 - 4 elements), to sort 5 elements, to sort less than 100 elements, to sort less than 500 elements and a huge battery of random tests that also check for leaks. I appreciate this test carried out by **gmartin99** ([github profile](https://github.com/gemartin99)), you can find more details of the test in this [link](https://github.com/gemartin99/Push-Swap-Tester).
```shell
$> bash push_swap_test.sh
```

## Visualizer

To visually see the movement of elements between the two stacks and check that they are finally ordered you can use 'push_swap_test.sh' using the next comand:
```shell
$> bash push_swap_test.sh -v 'NUMBER OF ELEMENTS'

For example:
$> bash push_swap_test.sh -v 200
```
It's looks like this:
<p align="center">
<img width="597" alt="212369245-54455057-43d9-42c5-a916-a825ff505813" src="https://user-images.githubusercontent.com/121127625/229173665-9795fa6c-c002-47e3-9acd-b66c870f3d6d.png">
</p>

#### Visualizer controls 🕹

|KEY|ACTION|
|---|---|
|`I`| Step by Step instructions|
|`S`| Run all the instructions|
|`P`| Pause |
|`1`| exec 'sa'|
|`2`| exec 'sb'|
|`3`| exec 'ra'|
|`4`| exec 'rb'|
|`5`| exec 'rra'|
|`6`| exec 'rrb'|
|`7`| exec 'pa'|
|`8`| exec 'pb'|
|`ESC ❌`|Close|
