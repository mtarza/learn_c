# C PROGRAMING -preprocessor

## 0. Write ## 0. Wa script that runs a C file through the preprocessor and save the result into another file.
* File> 0-preprocessor: is a script that runs a C file through the preprocessor and save the result into another file
## 1. Write a script that compiles a C file but does not link.
* File> 1-compiler: is a script that compiles a C file but does not link.
### input: `gcc -c $CFILE`

## 2. Write a script that generates the assembly code of a C code and save it in an output file.
* File> 2-assembler: is a script that generates the assembly code of a C code and save it in an output file.
### input: `gcc $CFILE -S`

## 3. Write a script that compiles a C file and creates an executable named `cisfun`.
* File>> 3-name: is a script that compiles a C file and creates an executable named cisfun.
### input: `gcc $CFILE -o cisfun`

## 4. Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
* File>> 4-puts.c: is a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
### input: check inside the file `4-puts.c` to see code.

## 5. Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art`, followed by a new line.
* File> 5-printf.c: is a C program that prints exactly "with proper grammar, but the outcome is a piece of art,", followed by a new line.
### input: check inside the file `5-printf.c` to see code.

## 6. Write a C program that prints the size of various types on the computer it is compiled and run on.
* File> 6-size.c: is a C program that prints the size of various types on the computer it is compiled and run on.
### input: check inside the file `6-size.c` to see code.

## 7. Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
File 100-intel is a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

## 8. Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

File 101-quote.c is a C program that prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19", followed by a new line, to the standard error.



EXERCICE
File 0-object_like_macro.h is a header file that defines a macro named SIZE as an abbreviation for the token 1024.

File 1-pi.h is a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

File 2-main.c is a program that prints the name of the file it was compiled from, followed by a new line.

File 3-function_like_macro.h is a function-like macro ABS(x) that computes the absolute value of a number x.

File 4-sum.h is a function-like macro SUM(x, y) that computes the sum of the numbers x and y.