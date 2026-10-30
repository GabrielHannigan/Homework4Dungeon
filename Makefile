main: main.c tools.c tools.h
	gcc main.c tools.c -o main

clean:
	rm -f main
	