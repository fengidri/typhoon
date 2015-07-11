Target=typhoon
all:
	gcc main.c -o $(Target) -lpcap

run: all
	./$(Target)
