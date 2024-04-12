all: ex1 ex3 ex4 ex8 ex9 ex14 ex15 ex16 

ex1:
	cc ex1.c -o ex1
	valgrind ./ex1

ex4:
	cc ex4.c -o ex4
	valgrind ./ex4

ex3:
	cc ex3.c -o ex3
	valgrind ./ex3
ex8:
	cc ex8.c -o ex8
	valgrind ./ex8

ex9:
	cc ex9.c -o ex9
	valgrind ./ex9

ex14:
	cc ex14.c -o ex14
	valgrind ./ex14 3 hiiamljq

ex15:
	cc ex15.c -o ex15
	valgrind ./ex15

ex16:
	cc ex16.c -o ex16
	valgrind ./ex16

exe:
	cc *.c -o exe
	valgrind ./exe
	rm -f exe

clean:
	rm -f exe
