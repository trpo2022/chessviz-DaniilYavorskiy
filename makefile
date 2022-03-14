CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -MMD
CHESS = bin/chess 

all: chess-start

chess-start: $(CHESS)
	./$(CHESS)

$(CHESS): obj/src/chess/chess.o obj/src/libchessviz/libchess.a
	g++ $(CFLAGS) -o $@ $^

obj/src/chess/chess.o: src/chessviz/chess.c
	g++ -c -I src $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/libchessviz/libchessviz.a: obj/src/libchessviz/chess.o
	ar rcs $@ $^

obj/src/libchessviz/chessviz.o: src/libchessviz/chess.cpp
	g++ -c -I src $(CFLAGS) $(CPPFLAGS) -o $@ $<

.PHONY: all clean

clean:
	rm obj/src/libchessviz/*.[oad] obj/src/chess/*.[od] $(CHESS)

-include obj/src/chess/chess.d obj/src/libchessviz/chess.d
