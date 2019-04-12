.PHONY: clean dirs

BIN=bin
SRC=src
OBJ=obj

all: dirs $(BIN)/OOXX_Game

$(BIN)/OOXX_Game: $(SRC)/main.cpp $(OBJ)/OOXX.o $(OBJ)/player.o | $(BIN)
	g++ -Wall -std=c++11 $< $(OBJ)/OOXX.o $(OBJ)/player.o -o $@

$(OBJ)/OOXX.o: $(SRC)/OOXX.cpp $(SRC)/OOXX.h | $(OBJ)
	g++ -Wall -std=c++11 -c $< -o $@

$(OBJ)/player.o: $(SRC)/player.cpp $(SRC)/player.h | $(OBJ)
	g++ -Wall -std=c++11 -c $< -o $@

dirs:
	mkdir -p $(SRC) $(BIN) $(OBJ)

clean:
	rm -rf $(BIN) $(OBJ)

stat:
	wc src/*

