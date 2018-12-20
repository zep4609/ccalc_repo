CFLAGS = -Wall -Wextra -pedantic -std=c99 
GTKFLAG = `pkg-config --cflags --libs gtk+-3.0`


Makefile: CCalc

CCalc: ccalc_main.o ccalc_gui.o
	gcc -o CCalc ccalc_main.o ccalc_gui.o $(GTKFLAG)

ccalc_main.o: ccalc_main.c ccalc_gui.h
	gcc $(CFLAGS) -c ccalc_main.c $(GTKFLAG)

ccalc_gui.o: ccalc_gui.c ccalc_gui.h
	gcc $(CFLAGS) -c ccalc_gui.c $(GTKFLAG)
