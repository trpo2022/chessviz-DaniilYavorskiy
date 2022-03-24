CC=gcc 
CFLAGS=-Wall -Werror -c
SOURCE=src/chessviz/
LIBSOURCE=src/libchessviz/
INCLUDEPATH=-I src
all: chessviz clean
chessviz: main.o libchessviz.a
	$(CC) -o chessviz main.o libchessviz.a 
libchessviz.a: Move.o Doska_v_nachale.o Proverka_vvoda.o Vivod_doski.o Take.o
	ar rcs libchessviz.a Move.o Doska_v_nachale.o Proverka_vvoda.o Vivod_doski.o Take.o
main.o: 
	$(CC) $(CFLAGS) $(INCLUDEPATH) $(SOURCE)main.c
Move.o: 
	$(CC) $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Move.c
Doska_v_nachale.o:
	$(CC) $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Doska_v_nachale.c
Proverka_vvedennogo.o:
	$(CC) $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Proverka_vvoda.c
Vivod_doski.o:
	$(CC) $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Vivod_doski.c
Vzatie.o:
	$(CC) $(CFLAGS) $(INCLUDEPATH) $(LIBSOURCE)Take.c
clean:
	rm -rf *.o *.a
.PHONY: chessviz clean

