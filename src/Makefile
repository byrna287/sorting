
all: random-ints

random-ints: random-ints.c
	gcc -o random-ints random-ints.c
	mv random-ints ../bin/random-ints

test: ../bin/random-ints
	../bin/random-ints 5 partial
