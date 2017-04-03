HW6: main.o src.o Def_int_calc.o
    g++ -o HW6 main.o src.o Def_int_calc.o
main.o:
    g++ -c -o main.o main.cpp
src.o:
    gcc -c -o src.o src.c
Def_int_calc.o:
    g++ -c -o Def_int_calc.o Def_int_calc.cpp
