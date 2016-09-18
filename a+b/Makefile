all: ab
ab: main.o
	gcc $(LDFLAGS) main.o -g -o ab
main.o:
	gcc $(LDFLAGS) -g -c main.c
clean:
	rm *.o ab
