Jeffrey Zhou
Jzhou46

For this homework assignment, I have made a makefile which includes all the commands to create a ".i" file, ".s" file, ".o" file, and an executable. The makefile also has commands to link the ".o" files together and compile and runs the program. If the makefile and ".c" files are downloaded, then all you need to do is type "make" into the command line and everything will be created and the program outputs the grand total of all the Ns in the program. If in the case that the makefile does not work (which I don't think it will). You can simply type these commands:

To create ".o" files:
	gcc -c mainC.c func2C.c

To create ".s" files:
	gcc -S mainC.c func2C.c

To create ".i" files:
	gcc -E -o mainC.i mainC.c
	gcc -E -o func2C.i func2C.c

To link the files together and give a name for the executable in order to run:
	gcc mainC.o func2C.o -o mainC

To run the program: 
	./mainC
