exec: read.o alpha.o num.o special.o
	gcc read.c alpha.c num.c special.c -o exec


read.o   : read.c
	cc -c read.c
alpha.o  : alpha.c
	cc -c alpha.c
num.o    : num.c
	cc -c num.c
special.o: special.c
	cc -c special.c

