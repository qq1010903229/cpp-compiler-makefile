all:
	g++ compiler.cpp -o compiler -Wall -Werror
	./compiler
