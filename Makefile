CFLAGS = -std=c99 -Wall -g 

calc.o: main.c getop.c stack.c getch.c calc.h ; $(CC) $(CFLAGS) -o calc.o calc.h *.c

.PHONY: format
format: ; astyle -A3 *.c && rm *.orig

.PHONY: clean 
clean: ; git clean -f -d 
