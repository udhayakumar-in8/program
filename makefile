exec: read.o alpha.o num.o special.o lines.o space.o smallstr.o bigstr.o occurance.o palindrome.o vowels.o const.o lline.o
	gcc read.c alpha.c num.c special.c lines.c space.o smallstr.c bigstr.c occurance.c palindrome.c vowels.c const.c lline.c -o exec

read.o   : read.c
	cc -c read.c
alpha.o  : alpha.c
	cc -c alpha.c
num.o    : num.c
	cc -c num.c
special.o: special.c
	cc -c special.c
lines.o  : lines.c
	cc -c lines.c
space.o  : space.c
	cc -c space.c
smallstr.o   : smallstr.c
	cc -c smallstr.c
bigstr.o     : bigstr.c
	cc -c bigstr.c
occurance.o  : occurance.c
	cc -c occurance.c
palindrome.o : palindrome.c
	cc -c palindrome.c
vowels.o    : vowels.c
	cc -c vowels.c
const.o     :const.c
	cc -c const.c
lline.o	    :lline.c
	cc -c lline.c
