CFLAGS = -std=c99 -Wall -g 

calc.o: main.c getop.c stack.c getch.c calc.h
	$(CC) $(CFLAGS) -o calc.o calc.h main.c getop.c getch.c stack.c

.PHONY: format
format:
	astyle -A3 *.c

.PHONY: clean 
clean:
	git clean -f -d
