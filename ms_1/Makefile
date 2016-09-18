all: ms_1
ms_1: main.o
	gcc $(LDFLAGS) main.o -g -o ms_1
main.o:
	gcc $(LDFLAGS) -g -c main.c
clean:
	rm *.o ms_1.exe
