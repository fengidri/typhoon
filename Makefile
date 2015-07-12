Target=typhoon
cc=gcc -Wall

all:
	$(cc) main.c paser_net.c -o $(Target) -lpcap

run: all
	./$(Target)
