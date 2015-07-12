Target=typhoon
all:
	gcc main.c paser_net.c -o $(Target) -lpcap

run: all
	./$(Target)
