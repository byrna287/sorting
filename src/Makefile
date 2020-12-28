
all: random_ints sel_sort

random_ints: random_ints.c
	gcc -o random_ints random_ints.c
	mv random_ints ../bin/random_ints

sel_sort: selection_sort.c
	gcc -o sel_sort selection_sort.c
	mv sel_sort ../bin/sel_sort

sel_sort_test: ../bin/sel_sort
	../bin/sel_sort 10 < ../test/partial/10_ints

test_10_ints: ../bin/random_ints
	../bin/random_ints 10 random
	../bin/random_ints 10 partial
	../bin/random_ints 10 reverse
	../bin/random_ints 10 sorted
