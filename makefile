all: func2C.o mainC.o func2C.s mainC.s func2C.i mainC.i main run

func2C.o: func2C.c
	gcc -c func2C.c

mainC.o: mainC.c
	gcc -c mainC.c

func2C.s: func2C.c
	gcc -S func2C.c

mainC.s: mainC.c
	gcc -S mainC.c

mainC.i: mainC.c
	gcc -E -o mainC.i mainC.c

func2C.i: func2C.c
	gcc -E -o func2C.i func2C.c

main: func2C.o mainC.o
	gcc mainC.o func2C.o -o mainC

run: mainC
	./mainC
clean: 
	rm -rf *o main
