src = ./src/
bin = ./bin/


all: #main
	g++ -o $(bin)main $(src)main.cpp

main: $(bin)main.o $(bin)ChessBoardConsoleUI.o
	g++ -o $(bin)main $(bin)main.o $(bin)ChessBoardConsoleUI.o

$(bin)main.o:
	g++ -c $(src)main.cpp

$(bin)ChessBoardConsoleUI.o: 
	g++ -c $(src)ChessBoardConsoleUI.cpp

