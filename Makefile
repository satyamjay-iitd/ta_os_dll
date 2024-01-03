main: main.c dll.h
	gcc main.c -o main

test: main
	./main
