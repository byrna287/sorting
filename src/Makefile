# to compile all the c files
all: random_ints sel_sort heap_sort radix_sort

# to compile random_ints
random_ints: random_ints.c
	gcc -o random_ints random_ints.c
	mv random_ints ../bin/random_ints

#to compile selection_sort
sel_sort: selection_sort.c
	gcc -o sel_sort selection_sort.c
	mv sel_sort ../bin/sel_sort

#to compile heap_sort
heap_sort: heap_sort.c
	gcc -o heap_sort heap_sort.c
	mv heap_sort ../bin/heap_sort

#to compile radix_sort
radix_sort: radix_sort.c
	gcc -o radix_sort radix_sort.c
	mv radix_sort ../bin/radix_sort

#to test selection_sort
sel_sort_test: ../bin/sel_sort
	../bin/sel_sort 10 < ../test/random/10_ints

#to test heap_sort
heap_sort_test: ../bin/heap_sort
	../bin/heap_sort 10 < ../test/sorted/10_ints

#to test radix_sort
radix_sort_test: ../bin/radix_sort
	../bin/radix_sort 5000000 < ../test/random/5000000_ints

#to genereate that amount of ints: these use the same numbers but in different order
#ten
10_ints: ../bin/random_ints
	../bin/random_ints 10 random > ../test/random/10_ints
	../bin/random_ints 10 partial > ../test/partial/10_ints
	../bin/random_ints 10 reverse > ../test/reverse/10_ints
	../bin/random_ints 10 sorted > ../test/sorted/10_ints

#1 thousand
1000_ints: ../bin/random_ints
	../bin/random_ints 1000 random > ../test/random/1000_ints
	../bin/random_ints 1000 partial > ../test/partial/1000_ints
	../bin/random_ints 1000 reverse > ../test/reverse/1000_ints
	../bin/random_ints 1000 sorted > ../test/sorted/1000_ints

#100 thousand
100000_ints: ../bin/random_ints
	../bin/random_ints 100000 random > ../test/random/100000_ints
	../bin/random_ints 100000 partial > ../test/partial/100000_ints
	../bin/random_ints 100000 reverse > ../test/reverse/100000_ints
	../bin/random_ints 100000 sorted > ../test/sorted/100000_ints

#1 million
1000000_ints: ../bin/random_ints
	../bin/random_ints 1000000 random > ../test/random/1000000_ints
	../bin/random_ints 1000000 partial > ../test/partial/1000000_ints
	../bin/random_ints 1000000 reverse > ../test/reverse/1000000_ints
	../bin/random_ints 1000000 sorted > ../test/sorted/1000000_ints

#2 million
2000000_ints: ../bin/random_ints
	../bin/random_ints 2000000 random > ../test/random/2000000_ints
	../bin/random_ints 2000000 partial > ../test/partial/2000000_ints
	../bin/random_ints 2000000 reverse > ../test/reverse/2000000_ints
	../bin/random_ints 2000000 sorted > ../test/sorted/2000000_ints

#5 million
5000000_ints: ../bin/random_ints
	../bin/random_ints 5000000 random > ../test/random/5000000_ints
	../bin/random_ints 5000000 partial > ../test/partial/5000000_ints
	../bin/random_ints 5000000 reverse > ../test/reverse/5000000_ints
	../bin/random_ints 5000000 sorted > ../test/sorted/5000000_ints
