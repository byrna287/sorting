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


#test cases: can edit these as you go for testing

#to test selection_sort
sel_sort_test: ../bin/sel_sort
	../bin/sel_sort 10 < ../test/random/10_ints

#to test heap_sort
heap_sort_test: ../bin/heap_sort
	../bin/heap_sort 100000 < ../test/random/100000_ints

#to test radix_sort
radix_sort_test: ../bin/radix_sort
	../bin/radix_sort 5000000 < ../test/random/5000000_ints


#to genereate that amount of ints: these use the same numbers but in different order

nums: 10_ints 100_ints 200_ints 1000_ints 2000_ints 100000_ints 1000000_ints 2000000_ints 5000000_ints

#ten
10_ints: ../bin/random_ints
	../bin/random_ints 10 random > ../test/random/10_ints
	../bin/random_ints 10 partial > ../test/partial/10_ints
	../bin/random_ints 10 reverse > ../test/reverse/10_ints
	../bin/random_ints 10 sorted > ../test/sorted/10_ints

#1 hundred
100_ints: ../bin/random_ints
	../bin/random_ints 100 random > ../test/random/100_ints
	../bin/random_ints 100 partial > ../test/partial/100_ints
	../bin/random_ints 100 reverse > ../test/reverse/100_ints
	../bin/random_ints 100 sorted > ../test/sorted/100_ints

#2 hundred
200_ints: ../bin/random_ints
	../bin/random_ints 200 random > ../test/random/200_ints
	../bin/random_ints 200 partial > ../test/partial/200_ints
	../bin/random_ints 200 reverse > ../test/reverse/200_ints
	../bin/random_ints 200 sorted > ../test/sorted/200_ints

#1 thousand
1000_ints: ../bin/random_ints
	../bin/random_ints 1000 random > ../test/random/1000_ints
	../bin/random_ints 1000 partial > ../test/partial/1000_ints
	../bin/random_ints 1000 reverse > ../test/reverse/1000_ints
	../bin/random_ints 1000 sorted > ../test/sorted/1000_ints

#2 thousand
2000_ints: ../bin/random_ints
	../bin/random_ints 2000 random > ../test/random/2000_ints
	../bin/random_ints 2000 partial > ../test/partial/2000_ints
	../bin/random_ints 2000 reverse > ../test/reverse/2000_ints
	../bin/random_ints 2000 sorted > ../test/sorted/2000_ints

#100 thousand
100000_ints: ../bin/random_ints
	../bin/random_ints 100000 random > ../test/random/100000_ints
	../bin/random_ints 100000 partial > ../test/partial/100000_ints
	../bin/random_ints 100000 reverse > ../test/reverse/100000_ints
	../bin/random_ints 100000 sorted > ../test/sorted/100000_ints

#200 thousand
200000_ints: ../bin/random_ints
	../bin/random_ints 200000 random > ../test/random/200000_ints
	../bin/random_ints 200000 partial > ../test/partial/200000_ints
	../bin/random_ints 200000 reverse > ../test/reverse/200000_ints
	../bin/random_ints 200000 sorted > ../test/sorted/200000_ints

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


#to run the algorithms and append the results (time taken) to a file

time_sel_sort: ../bin/sel_sort
	echo "\n"RANDOM >> ../test/sel_sort_time.txt
	../bin/sel_sort 10 < ../test/random/10_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 100 < ../test/random/100_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 200 < ../test/random/200_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 1000 < ../test/random/1000_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 2000 < ../test/random/2000_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 100000 < ../test/random/100000_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 200000 < ../test/random/200000_ints >> ../test/sel_sort_time.txt

	echo "\n"PARTIALLY SORTED >> ../test/sel_sort_time.txt
	../bin/sel_sort 10 < ../test/partial/10_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 100 < ../test/partial/100_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 200 < ../test/partial/200_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 1000 < ../test/partial/1000_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 2000 < ../test/partial/2000_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 100000 < ../test/partial/100000_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 200000 < ../test/partial/200000_ints >> ../test/sel_sort_time.txt

	echo "\n"REVERSE SORTED >> ../test/sel_sort_time.txt
	../bin/sel_sort 10 < ../test/reverse/10_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 100 < ../test/reverse/100_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 200 < ../test/reverse/200_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 1000 < ../test/reverse/1000_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 2000 < ../test/reverse/2000_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 100000 < ../test/reverse/100000_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 200000 < ../test/reverse/200000_ints >> ../test/sel_sort_time.txt

	echo "\n"SORTED >> ../test/sel_sort_time.txt
	../bin/sel_sort 10 < ../test/sorted/10_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 100 < ../test/sorted/100_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 200 < ../test/sorted/200_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 1000 < ../test/sorted/1000_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 2000 < ../test/sorted/2000_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 100000 < ../test/sorted/100000_ints >> ../test/sel_sort_time.txt
	../bin/sel_sort 200000 < ../test/sorted/200000_ints >> ../test/sel_sort_time.txt


time_heap_sort: ../bin/heap_sort
	echo "\n"RANDOM >> ../test/heap_sort_time.txt
	../bin/heap_sort 10 < ../test/random/10_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 100 < ../test/random/100_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 200 < ../test/random/200_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 1000 < ../test/random/1000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 2000 < ../test/random/2000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 100000 < ../test/random/100000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 200000 < ../test/random/200000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 1000000 < ../test/random/1000000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 2000000 < ../test/random/2000000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 5000000 < ../test/random/5000000_ints >> ../test/heap_sort_time.txt
	
	echo "\n"PARTIALLY SORTED >> ../test/heap_sort_time.txt
	../bin/heap_sort 10 < ../test/partial/10_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 100 < ../test/partial/100_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 200 < ../test/partial/200_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 1000 < ../test/partial/1000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 2000 < ../test/partial/2000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 100000 < ../test/partial/100000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 200000 < ../test/partial/200000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 1000000 < ../test/partial/1000000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 2000000 < ../test/partial/2000000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 5000000 < ../test/partial/5000000_ints >> ../test/heap_sort_time.txt

	echo "\n"REVERSE SORTED >> ../test/heap_sort_time.txt
	../bin/heap_sort 10 < ../test/reverse/10_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 100 < ../test/reverse/100_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 200 < ../test/reverse/200_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 1000 < ../test/reverse/1000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 2000 < ../test/reverse/2000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 100000 < ../test/reverse/100000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 200000 < ../test/reverse/200000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 1000000 < ../test/reverse/1000000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 2000000 < ../test/reverse/2000000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 5000000 < ../test/reverse/5000000_ints >> ../test/heap_sort_time.txt

	echo "\n"SORTED >> ../test/heap_sort_time.txt
	../bin/heap_sort 10 < ../test/sorted/10_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 100 < ../test/sorted/100_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 200 < ../test/sorted/200_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 1000 < ../test/sorted/1000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 2000 < ../test/sorted/2000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 100000 < ../test/sorted/100000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 200000 < ../test/sorted/200000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 1000000 < ../test/sorted/1000000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 2000000 < ../test/sorted/2000000_ints >> ../test/heap_sort_time.txt
	../bin/heap_sort 5000000 < ../test/sorted/5000000_ints >> ../test/heap_sort_time.txt
