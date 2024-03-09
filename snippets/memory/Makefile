clean:
	rm -rf pointers allocation struct tree

pointers: clean
	gcc --std=c99 --pedantic -Wall -o pointers pointers.c

struct: clean
	gcc --std=c99 --pedantic -o struct struct.c

allocation: clean
	gcc --std=c99 --pedantic -o allocation allocation.c

tree: clean
	gcc --std=c99 --pedantic -o tree tree.c
