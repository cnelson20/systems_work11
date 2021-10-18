all: collegetester
	
collegetester: main.o college.o
	gcc main.o college.o -o collegetester

main.o:	main.c college.h
	gcc -c main.c

college.o: college.c college.h
	gcc -c college.c

run:
	./collegetester
